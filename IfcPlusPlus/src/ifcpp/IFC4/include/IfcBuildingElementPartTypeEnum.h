/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcBuildingElementPartTypeEnum = ENUMERATION OF	(INSULATION	,PRECASTPANEL	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcBuildingElementPartTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcBuildingElementPartTypeEnumEnum
	{
		ENUM_INSULATION,
		ENUM_PRECASTPANEL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcBuildingElementPartTypeEnum();
	IfcBuildingElementPartTypeEnum( IfcBuildingElementPartTypeEnumEnum e ) { m_enum = e; }
	~IfcBuildingElementPartTypeEnum();
	virtual const char* className() const { return "IfcBuildingElementPartTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcBuildingElementPartTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcBuildingElementPartTypeEnumEnum m_enum;
};

