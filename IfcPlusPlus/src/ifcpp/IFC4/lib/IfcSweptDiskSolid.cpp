/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSweptDiskSolid.h"

// ENTITY IfcSweptDiskSolid 
IfcSweptDiskSolid::IfcSweptDiskSolid() {}
IfcSweptDiskSolid::IfcSweptDiskSolid( int id ) { m_id = id; }
IfcSweptDiskSolid::~IfcSweptDiskSolid() {}
shared_ptr<IfcPPObject> IfcSweptDiskSolid::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSweptDiskSolid> copy_self( new IfcSweptDiskSolid() );
	if( m_Directrix ) { copy_self->m_Directrix = dynamic_pointer_cast<IfcCurve>( m_Directrix->getDeepCopy(options) ); }
	if( m_Radius ) { copy_self->m_Radius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_Radius->getDeepCopy(options) ); }
	if( m_InnerRadius ) { copy_self->m_InnerRadius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_InnerRadius->getDeepCopy(options) ); }
	if( m_StartParam ) { copy_self->m_StartParam = dynamic_pointer_cast<IfcParameterValue>( m_StartParam->getDeepCopy(options) ); }
	if( m_EndParam ) { copy_self->m_EndParam = dynamic_pointer_cast<IfcParameterValue>( m_EndParam->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSweptDiskSolid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSWEPTDISKSOLID" << "(";
	if( m_Directrix ) { stream << "#" << m_Directrix->m_id; } else { stream << "$"; }
	stream << ",";
	if( m_Radius ) { m_Radius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_InnerRadius ) { m_InnerRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartParam ) { m_StartParam->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndParam ) { m_EndParam->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSweptDiskSolid::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcSweptDiskSolid::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSweptDiskSolid, expecting 5, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_Directrix, map );
	m_Radius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[1], map );
	m_InnerRadius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[2], map );
	m_StartParam = IfcParameterValue::createObjectFromSTEP( args[3], map );
	m_EndParam = IfcParameterValue::createObjectFromSTEP( args[4], map );
}
void IfcSweptDiskSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSolidModel::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Directrix", m_Directrix ) );
	vec_attributes.push_back( std::make_pair( "Radius", m_Radius ) );
	vec_attributes.push_back( std::make_pair( "InnerRadius", m_InnerRadius ) );
	vec_attributes.push_back( std::make_pair( "StartParam", m_StartParam ) );
	vec_attributes.push_back( std::make_pair( "EndParam", m_EndParam ) );
}
void IfcSweptDiskSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSolidModel::getAttributesInverse( vec_attributes_inverse );
}
void IfcSweptDiskSolid::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSolidModel::setInverseCounterparts( ptr_self_entity );
}
void IfcSweptDiskSolid::unlinkFromInverseCounterparts()
{
	IfcSolidModel::unlinkFromInverseCounterparts();
}
