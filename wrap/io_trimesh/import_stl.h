/****************************************************************************
* VCGLib                                                            o o     *
* Visual and Computer Graphics Library                            o     o   *
*                                                                _   O  _   *
* Copyright(C) 2004                                                \/)\/    *
* Visual Computing Lab                                            /\/|      *
* ISTI - Italian National Research Council                           |      *
*                                                                    \      *
* All rights reserved.                                                      *
*                                                                           *
* This program is free software; you can redistribute it and/or modify      *   
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 2 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
*                                                                           *
****************************************************************************/

This folders contains most common FACE configuration files
The name of the file specify the members that are added to the vertex class
The name is a sequence of letters, in strict alphabetical order.
The possible admitted letters pairs are

FA - face-face adjacency
FC - Per-Face Color
FN - Per-Face Normal
FQ - Per-Face Quality
VA - Vertex-face adjacency
WC - Per-Wedge Color
WN - Per-Wedge Normal
WQ - Per-Wedge Quality
WT - Per-Wedge Texture Coords
SA - Shared Vertex-Face and Face-Face Adjacency
RT - Data for Optimized Point-Face Distance and Ray-Tracing Stuff

E.g. 

#include<vcg/simplex/vertex/with/fafnwc.h> 

generate a type 
VertexFAFNWC<VertexType> 

that can store F-F adjacency, Per face normal color and per wedge color.
  

