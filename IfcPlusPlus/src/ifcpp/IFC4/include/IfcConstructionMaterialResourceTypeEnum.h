/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcConstructionMaterialResourceTypeEnum = ENUMERATION OF	(AGGREGATES	,CONCRETE	,DRYWALL	,FUEL	,GYPSUM	,MASONRY	,METAL	,PLASTIC	,WOOD	,NOTDEFINED	,USERDEFINED);
class IFCPP_EXPORT IfcConstructionMaterialResourceTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcConstructionMaterialResourceTypeEnumEnum
	{
		ENUM_AGGREGATES,
		ENUM_CONCRETE,
		ENUM_DRYWALL,
		ENUM_FUEL,
		ENUM_GYPSUM,
		ENUM_MASONRY,
		ENUM_METAL,
		ENUM_PLASTIC,
		ENUM_WOOD,
		ENUM_NOTDEFINED,
		ENUM_USERDEFINED
	};

	IfcConstructionMaterialResourceTypeEnum();
	IfcConstructionMaterialResourceTypeEnum( IfcConstructionMaterialResourceTypeEnumEnum e ) { m_enum = e; }
	~IfcConstructionMaterialResourceTypeEnum();
	virtual const char* className() const { return "IfcConstructionMaterialResourceTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcConstructionMaterialResourceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcConstructionMaterialResourceTypeEnumEnum m_enum;
};

