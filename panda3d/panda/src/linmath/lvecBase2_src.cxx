// Filename: lvecBase2_src.cxx
// Created by:  drose (08Mar00)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
////////////////////////////////////////////////////////////////////

TypeHandle FLOATNAME(LVecBase2)::_type_handle;

const FLOATNAME(LVecBase2) FLOATNAME(LVecBase2)::_zero =
  FLOATNAME(LVecBase2)(0.0f, 0.0f);
const FLOATNAME(LVecBase2) FLOATNAME(LVecBase2)::_unit_x =
  FLOATNAME(LVecBase2)(1.0f, 0.0f);
const FLOATNAME(LVecBase2) FLOATNAME(LVecBase2)::_unit_y =
  FLOATNAME(LVecBase2)(0.0f, 1.0f);

////////////////////////////////////////////////////////////////////
//     Function: LVecBase2::init_type
//       Access: Public, Static
//  Description:
////////////////////////////////////////////////////////////////////
void FLOATNAME(LVecBase2)::
init_type() {
  if (_type_handle == TypeHandle::none()) {
    // Format a string to describe the type.
    string name = "LVecBase2";
    name += FLOATTOKEN;
    register_type(_type_handle, name);
  }
}
