
#include <hpx/hpx.hpp>
#include <hpx/runtime/components/component_factory.hpp>

#include <hpx/util/portable_binary_iarchive.hpp>
#include <hpx/util/portable_binary_oarchive.hpp>
#include <boost/serialization/vector.hpp>

#include "simple_component_client.hpp"


using simple::my_simple_component;

hpx::lcos::future<void>
my_simple_component::distributeToAll(){

    BOOST_ASSERT(this->get_gid());
    typedef simple::server::my_simple_component::distributeToAll_action func;
    hpx::async<func>(this->get_gid());

}
