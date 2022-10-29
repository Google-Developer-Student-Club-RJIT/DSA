import java.util.Scanner;
class Dijkstra
{
    static int [] dijkstra(int V,ArrayList<ArrayList<ArrayList<Integer>>>adj,int S)
    {
            PriorityQueue<Pair>pq= new PriorityQueue<Pair>((x,y) -> x.distance - y.distance);
        
            int []dist =new int[V];
            for(int i=0;i<v;i++)dist[i]=(int)(1e9);
        
            dist[S]=0;
            pq.add(new Pair(0,S));
            while(pq.size()!=0){
                int dis=pq.peek().distance;
                int node=pq.peek().node;
                pq.remove();
            
                for(int i=0;i<adj.get(node).size();i++){
                    int edgeWeight=adj.get(node).get(i).get(1);
                    int adjNode=adj.get(node).get(i).get(0);
                
                    if(dis + edgeWeight < dist[adjNode]){
                        dist[adjNode]=dis+edgeWeight;
                        pq.add(new Pair(dist[adjNode],adjNode));
                    }
                }
            }
        return dist;
        
    }

    
}