
#
# tree.pri
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
    tree.cpp \
    tree/TreePackage.cpp \
    tree/TreeFactory.cpp \
    tree/TreePackageImpl.cpp \
    tree/TreeFactoryImpl.cpp \
    tree/TreeNode.cpp \
    tree/TreeNodeImpl.cpp \
    tree/Leaf.cpp \
    tree/LeafImpl.cpp \
    tree/NonTerminal.cpp \
    tree/NonTerminalImpl.cpp \


HEADERS += \
    tree.hpp \
    tree_forward.hpp \
    tree/TreePackage.hpp \
    tree/TreeFactory.hpp \
    tree/TreeNode.hpp \
    tree/Leaf.hpp \
    tree/NonTerminal.hpp \

