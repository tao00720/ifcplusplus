/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcLinearForceMeasure.h"

// TYPE IfcLinearForceMeasure = REAL;
IfcLinearForceMeasure::IfcLinearForceMeasure() {}
IfcLinearForceMeasure::IfcLinearForceMeasure( double value ) { m_value = value; }
IfcLinearForceMeasure::~IfcLinearForceMeasure() {}
shared_ptr<IfcPPObject> IfcLinearForceMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcLinearForceMeasure> copy_self( new IfcLinearForceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLinearForceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLINEARFORCEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcLinearForceMeasure> IfcLinearForceMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLinearForceMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLinearForceMeasure>(); }
	shared_ptr<IfcLinearForceMeasure> type_object( new IfcLinearForceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
