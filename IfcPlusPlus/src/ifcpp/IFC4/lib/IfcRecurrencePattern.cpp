/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDayInMonthNumber.h"
#include "ifcpp/IFC4/include/IfcDayInWeekNumber.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcMonthInYearNumber.h"
#include "ifcpp/IFC4/include/IfcRecurrencePattern.h"
#include "ifcpp/IFC4/include/IfcRecurrenceTypeEnum.h"
#include "ifcpp/IFC4/include/IfcTimePeriod.h"

// ENTITY IfcRecurrencePattern 
IfcRecurrencePattern::IfcRecurrencePattern() {}
IfcRecurrencePattern::IfcRecurrencePattern( int id ) { m_id = id; }
IfcRecurrencePattern::~IfcRecurrencePattern() {}
shared_ptr<IfcPPObject> IfcRecurrencePattern::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRecurrencePattern> copy_self( new IfcRecurrencePattern() );
	if( m_RecurrenceType ) { copy_self->m_RecurrenceType = dynamic_pointer_cast<IfcRecurrenceTypeEnum>( m_RecurrenceType->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_DayComponent.size(); ++ii )
	{
		auto item_ii = m_DayComponent[ii];
		if( item_ii )
		{
			copy_self->m_DayComponent.push_back( dynamic_pointer_cast<IfcDayInMonthNumber>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_WeekdayComponent.size(); ++ii )
	{
		auto item_ii = m_WeekdayComponent[ii];
		if( item_ii )
		{
			copy_self->m_WeekdayComponent.push_back( dynamic_pointer_cast<IfcDayInWeekNumber>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_MonthComponent.size(); ++ii )
	{
		auto item_ii = m_MonthComponent[ii];
		if( item_ii )
		{
			copy_self->m_MonthComponent.push_back( dynamic_pointer_cast<IfcMonthInYearNumber>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcInteger>( m_Position->getDeepCopy(options) ); }
	if( m_Interval ) { copy_self->m_Interval = dynamic_pointer_cast<IfcInteger>( m_Interval->getDeepCopy(options) ); }
	if( m_Occurrences ) { copy_self->m_Occurrences = dynamic_pointer_cast<IfcInteger>( m_Occurrences->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_TimePeriods.size(); ++ii )
	{
		auto item_ii = m_TimePeriods[ii];
		if( item_ii )
		{
			copy_self->m_TimePeriods.push_back( dynamic_pointer_cast<IfcTimePeriod>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcRecurrencePattern::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCRECURRENCEPATTERN" << "(";
	if( m_RecurrenceType ) { m_RecurrenceType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeNumericTypeList( stream, m_DayComponent );
	stream << ",";
	writeNumericTypeList( stream, m_WeekdayComponent );
	stream << ",";
	writeNumericTypeList( stream, m_MonthComponent );
	stream << ",";
	if( m_Position ) { m_Position->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Interval ) { m_Interval->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Occurrences ) { m_Occurrences->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_TimePeriods );
	stream << ");";
}
void IfcRecurrencePattern::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcRecurrencePattern::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRecurrencePattern, expecting 8, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_RecurrenceType = IfcRecurrenceTypeEnum::createObjectFromSTEP( args[0], map );
	readTypeOfIntList( args[1], m_DayComponent );
	readTypeOfIntList( args[2], m_WeekdayComponent );
	readTypeOfIntList( args[3], m_MonthComponent );
	m_Position = IfcInteger::createObjectFromSTEP( args[4], map );
	m_Interval = IfcInteger::createObjectFromSTEP( args[5], map );
	m_Occurrences = IfcInteger::createObjectFromSTEP( args[6], map );
	readEntityReferenceList( args[7], m_TimePeriods, map );
}
void IfcRecurrencePattern::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "RecurrenceType", m_RecurrenceType ) );
	if( m_DayComponent.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> DayComponent_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_DayComponent.begin(), m_DayComponent.end(), std::back_inserter( DayComponent_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "DayComponent", DayComponent_vec_object ) );
	}
	if( m_WeekdayComponent.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> WeekdayComponent_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_WeekdayComponent.begin(), m_WeekdayComponent.end(), std::back_inserter( WeekdayComponent_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "WeekdayComponent", WeekdayComponent_vec_object ) );
	}
	if( m_MonthComponent.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> MonthComponent_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_MonthComponent.begin(), m_MonthComponent.end(), std::back_inserter( MonthComponent_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "MonthComponent", MonthComponent_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "Position", m_Position ) );
	vec_attributes.push_back( std::make_pair( "Interval", m_Interval ) );
	vec_attributes.push_back( std::make_pair( "Occurrences", m_Occurrences ) );
	if( m_TimePeriods.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> TimePeriods_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_TimePeriods.begin(), m_TimePeriods.end(), std::back_inserter( TimePeriods_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "TimePeriods", TimePeriods_vec_object ) );
	}
}
void IfcRecurrencePattern::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
}
void IfcRecurrencePattern::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcRecurrencePattern::unlinkFromInverseCounterparts()
{
}
