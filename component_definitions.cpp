

#include "server/simple_component.hpp"
//#include "simple_component.hpp"

#include <hpx/hpx.hpp>
#include <hpx/runtime/components/component_factory.hpp>

#include <hpx/util/portable_binary_iarchive.hpp>
#include <hpx/util/portable_binary_oarchive.hpp>


HPX_REGISTER_COMPONENT_MODULE();


typedef hpx::components::simple_component<
    hpx::simple::server::my_simple_component
> simpleAccumulator;

HPX_REGISTER_MINIMAL_COMPONENT_FACTORY(simpleAccumulator,my_simple_component);

HPX_REGISTER_ACTION(
    simpleAccumulator::wrapped_type::distributeToAll_action,
    my_simple_component_distributeToAll_action);

HPX_REGISTER_ACTION(
    simpleAccumulator::wrapped_type::init_action,
    my_simple_component_init_action);
