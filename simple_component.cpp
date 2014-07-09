
#include <hpx/hpx.hpp>
#include <hpx/runtime/components/component_factory.hpp>

#include <hpx/util/portable_binary_iarchive.hpp>
#include <hpx/util/portable_binary_oarchive.hpp>

#include <boost/serialization/version.hpp>
#include <boost/serialization/export.hpp>

#include "simple_component.hpp"
//server's cpp
//[simple_accumulator_registration_definitions
///////////////////////////////////////////////////////////////////////////////
// Add factory registration functionality.
HPX_REGISTER_COMPONENT_MODULE();

typedef hpx::components::simple_component<
    simple::server::my_simple_component
> simpleAccumulator;

HPX_REGISTER_MINIMAL_COMPONENT_FACTORY(simpleAccumulator,my_simple_component);

///////////////////////////////////////////////////////////////////////////////
// Serialization support for managed_accumulator actions.
HPX_REGISTER_ACTION(
    simpleAccumulator::wrapped_type::distributeToAll,
    my_simple_component_distributeToAll_action);


