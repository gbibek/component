
#include <hpx/hpx_fwd.hpp>
#include <hpx/runtime/components/server/simple_component_base.hpp>
#include <iostream>
#include <hpx/include/components.hpp>
#include <hpx/runtime/actions/component_action.hpp>
// server

namespace simple { namespace server
{
    
    
   class my_simple_component
      : hpx::components::simple_component_base<my_simple_component>
   {
      public:
        
        my_simple_component_server():value(0){};     
        my_simple_component_server(int BlockSize){
            value = BlockSize;
        }
        void distributeToAll(){
      
            std::cout<<"I am printing this from "<<hpx::find_here() <<std::endl;
      
        }
    
      HPX_DEFINE_COMPONENT_ACTION(my_simple_component,distributeToAll);
      private:
        int value;
   
   };

}}    

HPX_REGISTER_ACTION_DECLARATION(
    simple::server::my_simple_component::distributeToAll_action,
    my_simple_component_distributeToAll_action);

