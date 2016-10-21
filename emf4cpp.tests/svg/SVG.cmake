
#
# SVG.cmake
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
# Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
#
# EMF4CPP is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# EMF4CPP is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#


set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

set(SVG_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SVGPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SVGFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SVGPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SVGFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Element.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/ElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/StructuralElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/StructuralElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Image.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/ImageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Svg.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SvgImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GroupingElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GroupingElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/G.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Defs.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/DefsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Symbol.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SymbolImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Use.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/UseImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GraphicalElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GraphicalElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Shape.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/ShapeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TextElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TextElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Rect.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/RectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Circle.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/CircleImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Ellipse.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/EllipseImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Line.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/LineImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Polyline.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/PolylineImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Polygon.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/PolygonImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Path.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/PathImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Point.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/PointImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Marker.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/MarkerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Text.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TextImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Tspan.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TspanImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Tref.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TrefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Attribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/AttributeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Transform.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TransformImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Scale.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/ScaleImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Translate.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TranslateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Rotate.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/RotateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Visibility.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/VisibilityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/FontWeight.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/FontWeightImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/FontStyle.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/FontStyleImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Dimension.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/DimensionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Coordinates.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/CoordinatesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/RelativeCoord.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/RelativeCoordImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/AbsoluteCoord.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/AbsoluteCoordImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/ReferencedFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/ReferencedFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SvgFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SvgFileImpl.cpp
)

set(SVG_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/SVG.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SVGPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SVGFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Element.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/StructuralElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Image.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Svg.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GroupingElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/G.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Defs.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Symbol.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Use.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GraphicalElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Shape.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TextElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Rect.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Circle.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Ellipse.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Line.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Polyline.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Polygon.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Path.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Point.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Marker.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Text.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Tspan.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Tref.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Attribute.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Transform.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Scale.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Translate.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Rotate.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Visibility.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/FontWeight.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/FontStyle.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Dimension.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Coordinates.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/RelativeCoord.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/AbsoluteCoord.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/ReferencedFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SvgFile.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SVGFactory.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SVGPackage.hpp DESTINATION include/emf4cpp/SVG)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Element.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/StructuralElement.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Image.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Svg.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GroupingElement.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/G.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Defs.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Symbol.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Use.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/GraphicalElement.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Shape.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/TextElement.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Rect.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Circle.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Ellipse.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Line.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Polyline.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Polygon.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Path.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Point.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Marker.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Text.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Tspan.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Tref.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Attribute.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Transform.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Scale.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Translate.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Rotate.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Visibility.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/FontWeight.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/FontStyle.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Dimension.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/Coordinates.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/RelativeCoord.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/AbsoluteCoord.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/ReferencedFile.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/SvgFile.hpp DESTINATION include/emf4cpp/SVG)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/SVG/dllSVG.hpp DESTINATION include/emf4cpp/SVG)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-1.1.0-Linux-x86/lib)

add_library(emf4cpp-SVG SHARED ${SVG_HEADERS} ${SVG_SOURCES})
set_target_properties(emf4cpp-SVG PROPERTIES COMPILE_FLAGS "-DMAKE_SVG_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-SVG emf4cpp-ecore)


install(TARGETS emf4cpp-SVG DESTINATION lib)

