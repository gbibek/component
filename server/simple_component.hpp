<<<<<<< HEAD
=======

>>>>>>> 72ac56c9757f0412cbf5a9a7a01e67fef9f789e9
#include <hpx/hpx.hpp>
#include <hpx/hpx_fwd.hpp>
#include <hpx/runtime/components/server/simple_component_base.hpp>
#include <iostream>
#include <hpx/include/components.hpp>
#include <hpx/runtime/actions/component_action.hpp>
// server

namespace hpx { namespace simple { namespace server
{
     
   class my_simple_component
      : public hpx::components::simple_component_base<my_simple_component>
   {
      public:
        
        my_simple_component():value(0){}     
        void init(size_t _value);
        void distributeToAll();    


        HPX_DEFINE_COMPONENT_ACTION(my_simple_component,distributeToAll);
        HPX_DEFINE_COMPONENT_ACTION(my_simple_component,init);
      private:
        size_t value;
   
   };

}}}    

HPX_REGISTER_ACTION_DECLARATION(
    hpx::simple::server::my_simple_component::distributeToAll_action,
    my_simple_component_distributeToAll_action);

HPX_REGISTER_ACTION_DECLARATION(
    hpx::simple::server::my_simple_component::init_action,
    my_simple_component_init_action);
    



