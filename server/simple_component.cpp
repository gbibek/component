#include "simple_component.hpp"

#include <hpx/hpx_main.hpp>
#include <hpx/include/components.hpp>

using hpx::simple::server::my_simple_component;
using namespace hpx::simple::server;

void
my_simple_component::distributeToAll(){

  std::cout<<"I am printing this from "<<hpx::find_here() <<std::endl; 

}


