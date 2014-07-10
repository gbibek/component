
#include <hpx/include/components.hpp>
#include <hpx/lcos/future.hpp>


//server included
#include "simple_component.hpp" 



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
      my_simple_component(hpx::future<hpx::naming::id_type> const& gid)
       : base_type(gid)
      {}
      // calls the void function that prints the message from a given locality
      hpx::lcos::future<void> distributeToAll();
  };
}

