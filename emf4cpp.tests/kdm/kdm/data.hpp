// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KDM_DATA_HPP
#define KDM_DATA_HPP

#include "data_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "data/DataModel.hpp"
#include "data/AbstractDataElement.hpp"
#include "data/DataResource.hpp"
#include "data/IndexElement.hpp"
#include "data/UniqueKey.hpp"
#include "data/Index.hpp"
#include "data/AbstractDataRelationship.hpp"
#include "data/KeyRelation.hpp"
#include "data/ReferenceKey.hpp"
#include "data/DataContainer.hpp"
#include "data/Catalog.hpp"
#include "data/RelationalSchema.hpp"
#include "data/ColumnSet.hpp"
#include "data/RelationalTable.hpp"
#include "data/RelationalView.hpp"
#include "data/RecordFile.hpp"
#include "data/DataEvent.hpp"
#include "data/XMLSchema.hpp"
#include "data/AbstractContentElement.hpp"
#include "data/ComplexContentType.hpp"
#include "data/AllContent.hpp"
#include "data/SeqContent.hpp"
#include "data/ChoiceContent.hpp"
#include "data/ContentItem.hpp"
#include "data/GroupContent.hpp"
#include "data/ContentRestriction.hpp"
#include "data/SimpleContentType.hpp"
#include "data/ExtendedDataElement.hpp"
#include "data/DataRelationship.hpp"
#include "data/MixedContent.hpp"
#include "data/ContentReference.hpp"
#include "data/DataAction.hpp"
#include "data/ReadsColumnSet.hpp"
#include "data/ContentAttribute.hpp"
#include "data/TypedBy.hpp"
#include "data/ReferenceTo.hpp"
#include "data/RestrictionOf.hpp"
#include "data/ExtensionTo.hpp"
#include "data/DatatypeOf.hpp"
#include "data/HasContent.hpp"
#include "data/WritesColumnSet.hpp"
#include "data/ProducesDataEvent.hpp"
#include "data/DataSegment.hpp"
#include "data/ContentElement.hpp"
#include "data/ManagesData.hpp"

// Package & Factory
#include "kdm/data/DataPackage.hpp"
#include "kdm/data/DataFactory.hpp"

#endif // KDM_DATA_HPP
