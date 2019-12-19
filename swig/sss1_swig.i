/* -*- c++ -*- */

#define SSS1_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "sss1_swig_doc.i"

%{
#include "sss1/ax_100_decode.h"
%}


%include "sss1/ax_100_decode.h"
GR_SWIG_BLOCK_MAGIC2(sss1, ax_100_decode);
