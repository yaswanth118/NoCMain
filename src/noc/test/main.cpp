#include "ConfigReader.hpp"
// No need of TopologyConfig.hpp as it's already included in Routing
#include "Routing.hpp"
#include "Topology.hpp"
#include "NetworkController.hpp"
#define MAX_CLK_CYCLES 10

class c_Node;

void f_InitializeSimulation(t_RoutingTable p_RoutingTable, t_ListOfNodes p_ListOfNodes) {
    for (int i = 0; i < MAX_CLK_CYCLES; ++i) {
        cout << "cycle number " << i << endl;
        c_NetworkController *o_NetworkController = new c_NetworkController(p_RoutingTable, p_ListOfNodes);
        o_NetworkController->f_clockCycle();
    }
}

int main() {
    ConfigReader reader("src/input/sim.cfg");

    string filename = reader.GetString("Hierarchy", "TopologyStruct");
    c_TopologyConfig *o_TopologyConfig = new c_TopologyConfig(filename);

    c_Routing *o_Routing = new c_Routing(E_ShortestPathAlgorithm, o_TopologyConfig->f_getMNeighbours(),
                                         o_TopologyConfig->f_getMPosition());


    int l_Layers = reader.GetInteger("Sim", "Layers");
    vector<c_Topology *> o_TopologyLayers;
    for (int i = 0; i < l_Layers; ++i) {
        c_Topology *o_Topology = new c_Topology(o_TopologyConfig->f_getMNumNodes(), o_TopologyConfig->f_getMPosition(),
                                                o_TopologyConfig->f_getMNeighbours());
        o_TopologyLayers.push_back(o_Topology);
    }

    f_InitializeSimulation(o_Routing->f_getMRoutingTable(),o_TopologyLayers[0]->f_getMListOfNodes());

    cout << "Execution Completed\n";

    return 0;
}
