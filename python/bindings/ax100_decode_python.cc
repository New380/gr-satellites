/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(ax100_decode.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(15904d5b29f5f9981f3c2b50a5958064)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/ax100_decode.h>
// pydoc.h is automatically generated in the build directory
#include <ax100_decode_pydoc.h>

void bind_ax100_decode(py::module& m)
{

    using ax100_decode = ::gr::satellites::ax100_decode;


    py::class_<ax100_decode, gr::block, gr::basic_block, std::shared_ptr<ax100_decode>>(
        m, "ax100_decode", D(ax100_decode))

        .def(py::init(&ax100_decode::make), py::arg("verbose"), D(ax100_decode, make))


        ;
}
