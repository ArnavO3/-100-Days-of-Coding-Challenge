// Question link: https://leetcode.com/problems/destination-city/description/

//You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, 
//the city without any path outgoing to another city.
//It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.

class Solution {
public:
   string destCity(vector<vector<string>>& paths) 
{
		unordered_set<string> city;
		for(int i = 0; i < paths.size(); i++)
			city.insert(paths[i][0]);

		for(int i = 0; i < paths.size(); i++)
		{
			if(city.find(paths[i][1]) == city.end())
				return paths[i][1];
		}
    
    return "";
 }		
};
