#define SIZE 1000

queue <int> turn;
int used[SIZE];
int matrix[SIZE][SIZE];//adjacency matrix

void wideWidthSearch ()
{
      while (!turn.empty())
      {
            int currentIndex = turn.front();
            turn.pop();
            for (int i = 0; i < SIZE; i++)
			{
                  if (isConnect (currentIndex, i))
                  {
                        turn.push(i);
                  }
            }
       }
}

