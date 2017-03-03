
#
# json.pri
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
    json.cpp \
    json/JsonPackage.cpp \
    json/JsonFactory.cpp \
    json/JsonPackageImpl.cpp \
    json/JsonFactoryImpl.cpp\ 
    json/ObjectValue.cpp \
    json/ObjectValueImpl.cpp \
    json/NVPair.cpp \
    json/NVPairImpl.cpp \
    json/Value.cpp \
    json/ValueImpl.cpp \
    json/StringValue.cpp \
    json/StringValueImpl.cpp \
    json/NumberValue.cpp \
    json/NumberValueImpl.cpp \
    json/BooleanValue.cpp \
    json/BooleanValueImpl.cpp \
    json/ArrayValue.cpp \
    json/ArrayValueImpl.cpp \
    json/NullValue.cpp \
    json/NullValueImpl.cpp \


HEADERS += \
    json.hpp \
    json_forward.hpp \
    json/JsonPackage.hpp \
    json/JsonFactory.hpp \
    json/ObjectValue.hpp \
    json/NVPair.hpp \
    json/Value.hpp \
    json/StringValue.hpp \
    json/NumberValue.hpp \
    json/BooleanValue.hpp \
    json/ArrayValue.hpp \
    json/NullValue.hpp \

