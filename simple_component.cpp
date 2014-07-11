
#include "simple_component.hpp"

#include <hpx/hpx.hpp>
#include <hpx/runtime/components/component_factory.hpp>

#include <hpx/util/portable_binary_iarchive.hpp>
#include <hpx/util/portable_binary_oarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/export.hpp>
#include <hpx/runtime/applier/apply.hpp>
#include <hpx/include/async.hpp>

using hpx::simple::my_simple_component;

hpx::lcos::future<void>
my_simple_component::init_clint(size_t value_){
    BOOST_ASSERT(this->get_gid());
    typedef hpx::simple::server::my_simple_component::init_action func;
    return hpx::async<func>(this->get_gid(),value_);

}

hpx::lcos::future<void>
my_simple_component::distributeToAll(){

    BOOST_ASSERT(this->get_gid());
    typedef hpx::simple::server::my_simple_component::distributeToAll_action func;
    return hpx::async<func>(this->get_gid());

}
