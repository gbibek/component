#include "simple_component.hpp"

#include <hpx/hpx_main.hpp>
#include <hpx/hpx.hpp>
#include <hpx/hpx_init.hpp>
int hpx_main(){
  
    //typedef my_simple_component obj;    
    hpx::simple::my_simple_component obj(
             hpx::components::new_<hpx::simple::server::my_simple_component>(hpx::find_here())); 
    obj.init_clint(20);
    obj.distributeToAll();
 
    return hpx::finalize();
}

int main(int argc, char* argv[]){

    return hpx::init();

}
