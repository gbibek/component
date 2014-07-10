
#include "server/simple_component.hpp"  

#include <hpx/include/components.hpp>
#include <hpx/lcos/future.hpp>


//server included



// client 
namespace simple {
   
  class my_simple_component
    : public hpx::components::client_base<
        my_simple_component, hpx::components::stub_base<server::my_simple_component>
      > 
  {       
    typedef hpx::components::client_base<                                       
        my_simple_component, hpx::components::stub_base<server::my_simple_component>
      > base_type;
     
    public: 
      // empty constructor for hpx purpose .. 
      my_simple_component(){};  
      my_simple_component(hpx::future<hpx::naming::id_type> && gid)
       : base_type(std::move(gid))
      {}
      // calls the void function that prints the message from a given locality
      hpx::lcos::future<void> distributeToAll();
  };
}

