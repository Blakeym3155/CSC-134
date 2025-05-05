#include <iostream>
#include "Graph.h"

using namespace std;

int main() {
   const double MILES_TO_APPLES = 100.0;

   Graph graph1;
    
   Vertex* vertexA = graph1.AddVertex("Hello Kitty's House");
   Vertex* vertexB = graph1.AddVertex("Cinnamoroll's Cafe");
   Vertex* vertexC = graph1.AddVertex("My Melody's Garden");
   Vertex* vertexD = graph1.AddVertex("Keroppi's Pond");
   
   graph1.AddUndirectedEdge(vertexA, vertexB, 10 * MILES_TO_APPLES);
   graph1.AddUndirectedEdge(vertexA, vertexC, 5 * MILES_TO_APPLES);
   graph1.AddUndirectedEdge(vertexA, vertexD, 3 * MILES_TO_APPLES);
   graph1.AddUndirectedEdge(vertexB, vertexC, 10 * MILES_TO_APPLES);
   graph1.AddUndirectedEdge(vertexB, vertexD, 6 * MILES_TO_APPLES);
   graph1.AddUndirectedEdge(vertexC, vertexD, 7 * MILES_TO_APPLES);
    
   for (Vertex* vertex : graph1.GetVertices()) {
      cout << "Location: " << vertex->label << endl;
        
      cout << "  Flights from " << vertex->label << ":" << endl;
      for (Edge* outgoingEdge : *graph1.GetEdgesFrom(vertex)) {
         cout << "   - " << vertex->label << " to ";
         cout << outgoingEdge->toVertex->label << ", ";
         cout << (int)outgoingEdge->weight << " apples" << endl;
      }
     
      cout << "  Flights to " << vertex->label << ":" << endl;
      for (Edge* incomingEdge : *graph1.GetEdgesTo(vertex)) {
         cout << "   - " << incomingEdge->fromVertex->label << " to ";
         cout << vertex->label << ", ";
         cout << (int)incomingEdge->weight << " apples" << endl;
      }
   }
    
   return 0;
}
