#include <vector>

std::vector < std::vector<int> > graph;

std::vector<bool> used;

void depthSearch(int nodeIndex)
{
    used[nodeIndex] = true;
    for (const auto& i : graph[nodeIndex])
    {
        if (!used[i])
            depthSearch(i);
    }
}


