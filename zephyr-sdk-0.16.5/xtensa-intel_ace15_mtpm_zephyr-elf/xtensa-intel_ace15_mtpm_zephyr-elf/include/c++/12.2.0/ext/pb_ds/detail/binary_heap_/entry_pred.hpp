// -*- C++ -*-

// Copyright (C) 2005-2022 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

// Copyright (C) 2004 Ami Tavory and Vladimir Dreizin, IBM-HRL.

// Permission to use, copy, modify, sell, and distribute this software
// is hereby granted without fee, provided that the above copyright
// notice appears in all copies, and that both that copyright notice
// and this permission notice appear in supporting documentation. None
// of the above authors, nor IBM Haifa Research Laboratories, make any
// representation about the suitability of this software for any
// purpose. It is provided "as is" without express or implied
// warranty.

/**
 * @file binary_heap_/entry_pred.hpp
 * Contains an implementation class for a binary_heap.
 */

#ifndef PB_DS_BINARY_HEAP_ENTRY_PRED_HPP
#define PB_DS_BINARY_HEAP_ENTRY_PRED_HPP

namespace __gnu_pbds
{
  namespace detail
  {
    /// Entry predicate primary class template.
    template<typename _VTp, typename Pred, typename _Alloc, bool No_Throw>
      struct entry_pred;

    /// Specialization, true.
    template<typename _VTp, typename Pred, typename _Alloc>
      struct entry_pred<_VTp, Pred, _Alloc, true>
      {
	typedef Pred 						type;
      };

    /// Specialization, false.
    template<typename _VTp, typename Pred, typename _Alloc>
      struct entry_pred<_VTp, Pred, _Alloc, false>
      {
      private:
	typedef rebind_traits<_Alloc, _VTp>		__rebind_v;

      public:
	typedef typename __rebind_v::const_pointer	entry;

	struct type : public Pred
	{
	  inline
	  type() { }

	  inline
	  type(const Pred& other) : Pred(other) { }

	  inline bool
	  operator()(entry p_v) const
	  { return Pred::operator()(*p_v); }
	};
      };
  } // namespace detail
} // namespace __gnu_pbds

#endif // #ifndef PB_DS_BINARY_HEAP_ENTRY_PRED_HPP
