/********************************************************************************
*                                                                              *
* This file is part of IfcOpenShell.                                           *
*                                                                              *
* IfcOpenShell is free software: you can redistribute it and/or modify         *
* it under the terms of the Lesser GNU General Public License as published by  *
* the Free Software Foundation, either version 3.0 of the License, or          *
* (at your option) any later version.                                          *
*                                                                              *
* IfcOpenShell is distributed in the hope that it will be useful,              *
* but WITHOUT ANY WARRANTY; without even the implied warranty of               *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 *
* Lesser GNU General Public License for more details.                          *
*                                                                              *
* You should have received a copy of the Lesser GNU General Public License     *
* along with this program. If not, see <http://www.gnu.org/licenses/>.         *
*                                                                              *
********************************************************************************/

/********************************************************************************
 *                                                                              *
 * This file registers function prototypes for all supported IFC geometrical    *
 * entities. For entities of type CLASS an std::map is also created to cache    *
 * the output of the conversion functions                                       *
 *                                                                              *
 ********************************************************************************/

#include "../../../ifcparse/IfcUtil.h"
#include "../../../ifcparse/IfcParse.h"

SHAPES(IfcRepresentation);
// IfcFacetedBrep included
// IfcAdvancedBrep included
// IfcFacetedBrepWithVoids included
// IfcAdvancedBrepWithVoids included
SHAPES(IfcManifoldSolidBrep);
SHAPES(IfcMappedItem);
SHAPES(IfcFaceBasedSurfaceModel);

SHAPE(IfcExtrudedAreaSolid);
SHAPE(IfcConnectedFaceSet);
SHAPE(IfcCsgSolid);
SHAPE(IfcBlock);
SHAPE(IfcBooleanResult);
SHAPE(IfcSphere);
SHAPE(IfcRectangularPyramid);
SHAPE(IfcRightCircularCylinder);
SHAPE(IfcRightCircularCone);
#ifdef USE_IFC4
SHAPE(IfcTriangulatedFaceSet);
#endif
SHAPE(IfcHalfSpaceSolid);

FACE(IfcArbitraryClosedProfileDef);
FACE(IfcCircleHollowProfileDef);
FACE(IfcCircleProfileDef);
FACE(IfcFace);
FACE(IfcRoundedRectangleProfileDef);
FACE(IfcRectangleHollowProfileDef);
FACE(IfcRectangleProfileDef);
FACE(IfcTrapeziumProfileDef);
FACE(IfcEllipseProfileDef);
FACE(IfcCShapeProfileDef);
FACE(IfcIShapeProfileDef);
FACE(IfcLShapeProfileDef);
FACE(IfcTShapeProfileDef);
FACE(IfcUShapeProfileDef);
FACE(IfcZShapeProfileDef);

WIRE(IfcEdgeLoop);
WIRE(IfcOrientedEdge);
WIRE(IfcPolyLoop);
WIRE(IfcPolyline);
WIRE(IfcCompositeCurve);
WIRE(IfcTrimmedCurve);

CURVE(IfcCircle);
CURVE(IfcEllipse);
CURVE(IfcLine);

CLASS(IfcCartesianPoint,cgal_point_t);
CLASS(IfcDirection,cgal_direction_t);
CLASS(IfcVector,cgal_vector_t);
CLASS(IfcPlane,cgal_plane_t);
CLASS(IfcAxis2Placement2D,cgal_placement_t);
CLASS(IfcAxis2Placement3D,cgal_placement_t);
CLASS(IfcObjectPlacement,cgal_placement_t);
CLASS(IfcCartesianTransformationOperator2DnonUniform,cgal_placement_t);
CLASS(IfcCartesianTransformationOperator3DnonUniform,cgal_placement_t);
CLASS(IfcCartesianTransformationOperator2D,cgal_placement_t);
CLASS(IfcCartesianTransformationOperator3D,cgal_placement_t);