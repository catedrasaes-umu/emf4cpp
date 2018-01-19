
#
# myDsl.pri
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
# Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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


SOURCES += \
    myDsl.cpp \
    myDsl/MyDslPackage.cpp \
    myDsl/MyDslFactory.cpp \
    myDsl/MyDslPackageImpl.cpp \
    myDsl/MyDslFactoryImpl.cpp \
    myDsl/Model.cpp \
    myDsl/ModelImpl.cpp \
    myDsl/Import.cpp \
    myDsl/ImportImpl.cpp \
    myDsl/Type.cpp \
    myDsl/TypeImpl.cpp \
    myDsl/SimpleType.cpp \
    myDsl/SimpleTypeImpl.cpp \
    myDsl/Entity.cpp \
    myDsl/EntityImpl.cpp \
    myDsl/Property.cpp \
    myDsl/PropertyImpl.cpp \


HEADERS += \
    myDsl.hpp \
    myDsl_forward.hpp \
    myDsl/MyDslPackage.hpp \
    myDsl/MyDslFactory.hpp \
    myDsl/Model.hpp \
    myDsl/Import.hpp \
    myDsl/Type.hpp \
    myDsl/SimpleType.hpp \
    myDsl/Entity.hpp \
    myDsl/Property.hpp \

