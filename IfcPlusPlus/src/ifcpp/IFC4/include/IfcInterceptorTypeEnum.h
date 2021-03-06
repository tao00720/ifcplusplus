/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcInterceptorTypeEnum = ENUMERATION OF	(CYCLONIC	,GREASE	,OIL	,PETROL	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcInterceptorTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcInterceptorTypeEnumEnum
	{
		ENUM_CYCLONIC,
		ENUM_GREASE,
		ENUM_OIL,
		ENUM_PETROL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcInterceptorTypeEnum();
	IfcInterceptorTypeEnum( IfcInterceptorTypeEnumEnum e ) { m_enum = e; }
	~IfcInterceptorTypeEnum();
	virtual const char* className() const { return "IfcInterceptorTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcInterceptorTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcInterceptorTypeEnumEnum m_enum;
};

