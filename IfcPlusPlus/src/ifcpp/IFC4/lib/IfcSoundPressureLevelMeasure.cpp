/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSoundPressureLevelMeasure.h"

// TYPE IfcSoundPressureLevelMeasure = REAL;
IfcSoundPressureLevelMeasure::IfcSoundPressureLevelMeasure() {}
IfcSoundPressureLevelMeasure::IfcSoundPressureLevelMeasure( double value ) { m_value = value; }
IfcSoundPressureLevelMeasure::~IfcSoundPressureLevelMeasure() {}
shared_ptr<IfcPPObject> IfcSoundPressureLevelMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSoundPressureLevelMeasure> copy_self( new IfcSoundPressureLevelMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcSoundPressureLevelMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSOUNDPRESSURELEVELMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcSoundPressureLevelMeasure> IfcSoundPressureLevelMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSoundPressureLevelMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSoundPressureLevelMeasure>(); }
	shared_ptr<IfcSoundPressureLevelMeasure> type_object( new IfcSoundPressureLevelMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
