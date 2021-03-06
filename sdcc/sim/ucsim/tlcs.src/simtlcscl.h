/*
 * Simulator of microcontrollers (tlcs.src/simtlcscl.h)
 *
 * Copyright (C) 2016,16 Drotos Daniel, Talker Bt.
 * 
 * To contact author send email to drdani@mazsola.iit.uni-miskolc.hu
 *
 */

/* This file is part of microcontroller simulator: ucsim.

UCSIM is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

UCSIM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with UCSIM; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */
/*@1@*/

/* $Id: simtlcscl.h 216 2016-06-18 08:02:40Z  $ */

#ifndef SIMTLCSCL_HEADER
#define SIMTLCSCL_HEADER

#include "simcl.h"


class cl_simtlcs: public cl_sim
{
 public:
  cl_simtlcs(class cl_app *the_app);

  virtual class cl_uc *mk_controller(void);
};


#endif

/* End of tlcs.src/simtlcscl.h */
