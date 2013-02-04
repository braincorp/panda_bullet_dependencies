// Filename: lvecBase4_src.cxx
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

TypeHandle FLOATNAME(LVecBase4)::_type_handle;
TypeHandle FLOATNAME(UnalignedLVecBase4)::_type_handle;

const FLOATNAME(LVecBase4) FLOATNAME(LVecBase4)::_zero =
  FLOATNAME(LVecBase4)(0.0f, 0.0f, 0.0f, 0.0f);
const FLOATNAME(LVecBase4) FLOATNAME(LVecBase4)::_unit_x =
  FLOATNAME(LVecBase4)(1.0f, 0.0f, 0.0f, 0.0f);
const FLOATNAME(LVecBase4) FLOATNAME(LVecBase4)::_unit_y =
  FLOATNAME(LVecBase4)(0.0f, 1.0f, 0.0f, 0.0f);
const FLOATNAME(LVecBase4) FLOATNAME(LVecBase4)::_unit_z =
  FLOATNAME(LVecBase4)(0.0f, 0.0f, 1.0f, 0.0f);
const FLOATNAME(LVecBase4) FLOATNAME(LVecBase4)::_unit_w =
  FLOATNAME(LVecBase4)(0.0f, 0.0f, 0.0f, 1.0f);

////////////////////////////////////////////////////////////////////
//     Function: LVecBase4::init_type
//       Access: Public, Static
//  Description:
////////////////////////////////////////////////////////////////////
void FLOATNAME(LVecBase4)::
init_type() {
  if (_type_handle == TypeHandle::none()) {
    // Format a string to describe the type.
    string name = "LVecBase4";
    name += FLOATTOKEN;
    register_type(_type_handle, name);
  }
}


////////////////////////////////////////////////////////////////////
//     Function: UnalignedLVecBase4::init_type
//       Access: Public, Static
//  Description:
////////////////////////////////////////////////////////////////////
void FLOATNAME(UnalignedLVecBase4)::
init_type() {
  if (_type_handle == TypeHandle::none()) {
    // Format a string to describe the type.
    string name = "UnalignedLVecBase4";
    name += FLOATTOKEN;
    register_type(_type_handle, name);
  }
}

