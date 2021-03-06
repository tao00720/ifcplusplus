/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcAnalysisModelTypeEnum.h"

// TYPE IfcAnalysisModelTypeEnum = ENUMERATION OF	(IN_PLANE_LOADING_2D	,OUT_PLANE_LOADING_2D	,LOADING_3D	,USERDEFINED	,NOTDEFINED);
IfcAnalysisModelTypeEnum::IfcAnalysisModelTypeEnum() {}
IfcAnalysisModelTypeEnum::~IfcAnalysisModelTypeEnum() {}
shared_ptr<IfcPPObject> IfcAnalysisModelTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcAnalysisModelTypeEnum> copy_self( new IfcAnalysisModelTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcAnalysisModelTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCANALYSISMODELTYPEENUM("; }
	if( m_enum == ENUM_IN_PLANE_LOADING_2D )
	{
		stream << ".IN_PLANE_LOADING_2D.";
	}
	else if( m_enum == ENUM_OUT_PLANE_LOADING_2D )
	{
		stream << ".OUT_PLANE_LOADING_2D.";
	}
	else if( m_enum == ENUM_LOADING_3D )
	{
		stream << ".LOADING_3D.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcAnalysisModelTypeEnum> IfcAnalysisModelTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAnalysisModelTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAnalysisModelTypeEnum>(); }
	shared_ptr<IfcAnalysisModelTypeEnum> type_object( new IfcAnalysisModelTypeEnum() );
	if( boost::iequals( arg, L".IN_PLANE_LOADING_2D." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_IN_PLANE_LOADING_2D;
	}
	else if( boost::iequals( arg, L".OUT_PLANE_LOADING_2D." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_OUT_PLANE_LOADING_2D;
	}
	else if( boost::iequals( arg, L".LOADING_3D." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_LOADING_3D;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
