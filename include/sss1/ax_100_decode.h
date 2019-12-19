/* -*- c++ -*- */
/* 
 * Copyright 2019 shiwang.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_SSS1_AX_100_DECODE_H
#define INCLUDED_SSS1_AX_100_DECODE_H

#include <sss1/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace sss1 {

    /*!
     * \brief <+description of block+>
     * \ingroup sss1
     *
     */
    class SSS1_API ax_100_decode : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<ax_100_decode> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of sss1::ax_100_decode.
       *
       * To avoid accidental use of raw pointers, sss1::ax_100_decode's
       * constructor is in a private implementation
       * class. sss1::ax_100_decode::make is the public interface for
       * creating new instances.
       */
      static sptr make(bool verbose, int viterbi, int scrambler, int rs);
    };

  } // namespace sss1
} // namespace gr

#endif /* INCLUDED_SSS1_AX_100_DECODE_H */

