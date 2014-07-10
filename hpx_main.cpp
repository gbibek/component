#include "simple_component.hpp"

#include <hpx/hpx_main.hpp>
#include <hpx/hpx.hpp>
#include <hpx/hpx_init.hpp>
int hpx_main(){
  
    //typedef my_simple_component obj;    
    simple::my_simple_component obj(
             hpx::components::new_<simple::server::my_simple_component>(hpx::find_here())); 
 
    obj.distributeToAll();
 
    return hpx::finalize();
}

int main(int argc, char* argv[]){

    return hpx::init();

}
