#include "simple_component.hpp"

#include <hpx/hpx_main.hpp>
#include <hpx/include/components.hpp>

using simple::server::my_simple_component;
using namespace simple::server;

void
my_simple_component::distributeToAll(){

  std::cout<<"I am printing this from "<<hpx::find_here() <<std::endl; 

}


