#include <iostream>
using namespace std;

const unsigned int configs[24][5] = {
			{0,  1,  2,  7,  8},
			{0,  1,  3,  4,  5},
			{0,  1,  2, 27, 28},
			{0,  1, 23, 24, 25},

			{0,  1,  2,  4,  5},
			{0,  1,  6,  7,  8},
			{0,  1,  2, 24, 25},
			{0,  1, 26, 27, 28},

			{0,  5, 10, 11, 16},
			{0,  5,  9, 10, 14},
			{0,  5, 10, 35, 40},
			{0,  5, 15, 20, 25},

			{0,  5,  6, 11, 16},
			{0,  4,  5,  9, 14},
			{0,  5, 30, 35, 40},
			{0,  5, 10, 20, 25},

			{0, 25, 50, 51, 76},
			{0, 25, 49, 50, 74},
			{0, 25, 50, 55, 80},
			{0, 25, 45, 50, 70},

			{0, 25, 26, 51, 76},
			{0, 24, 25, 49, 74},
			{0, 25, 30, 55, 80},
			{0, 20, 25, 45, 70},
};

int preparecandidates( unsigned int* * candidates)
{
	unsigned int i,j,x,y,z;
	
	for (i=0;i<125;i++)
	{
		for (j=0;j<24;j++)
		{
			candidates[i][j] = 0;
		}
	}
	
	{
	for (z=0;z<5;z++)
	{
		for (y=0;y<4;y++)
		{
			for (x=0;x<2;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][0] = 1;
			}
		}
	}
	
	for (z=0;z<5;z++)
	{
		for (y=0;y<4;y++)
		{
			for (x=2;x<4;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][1] = 1;
			}
		}
	}
	
	for (z=0;z<4;z++)
	{
		for (y=0;y<5;y++)
		{
			for (x=0;x<2;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][2] = 1;
			}
		}
	}
	
	for (z=0;z<4;z++)
	{
		for (y=0;y<5;y++)
		{
			for (x=2;x<4;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][3] = 1;
			}
		}
	}
	}
	
	{
	for (z=0;z<5;z++)
	{
		for (y=0;y<4;y++)
		{
			for (x=1;x<3;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][4] = 1;
			}
		}
	}
	
	for (z=0;z<5;z++)
	{
		for (y=0;y<4;y++)
		{
			for (x=0;x<2;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][5] = 1;
			}
		}
	}
	
	for (z=0;z<4;z++)
	{
		for (y=0;y<5;y++)
		{
			for (x=1;x<3;x++)
			{
				i = 25*z + 5*y + x;
				candidates[i][6] = 1;
			}
		}
	}
	
	for (z=0;z<4;z++)
	{
		for (y=0;y<5;y++)
		{
			for (x=0;x<1;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][7] = 1;
			}
		}
	}
	}
	
	{
	for (z=0;z<5;z++)
	{
		for (y=0;y<2;y++)
		{
			for (x=0;x<4;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][8] = 1;
			}
		}
	}
	
	for (z=0;z<5;z++)
	{
		for (y=0;y<2;y++)
		{
			for (x=1;x<5;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][9] = 1;
			}
		}
	}
	
	for (z=0;z<4;z++)
	{
		for (y=0;y<2;y++)
		{
			for (x=0;x<5;x++)
			{
				i = 25*z + 5*y + x;
				candidates[i][10] = 1;
			}
		}
	}
	
	for (z=0;z<4;z++)
	{
		for (y=2;y<4;y++)
		{
			for (x=0;x<5;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][11] = 1;
			}
		}
	}
	}
	
	{
	for (z=0;z<5;z++)
	{
		for (y=0;y<2;y++)
		{
			for (x=0;x<4;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][12] = 1;
			}
		}
	}
	
	for (z=0;z<5;z++)
	{
		for (y=0;y<2;y++)
		{
			for (x=1;x<5;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][13] = 1;
			}
		}
	}
	
	for (z=0;z<4;z++)
	{
		for (y=0;y<2;y++)
		{
			for (x=0;x<5;x++)
			{
				i = 25*z + 5*y + x;
				candidates[i][14] = 1;
			}
		}
	}
	
	for (z=0;z<4;z++)
	{
		for (y=1;y<3;y++)
		{
			for (x=0;x<5;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][15] = 1;
			}
		}
	}
	}
	
	{
	for (z=0;z<2;z++)
	{
		for (y=0;y<5;y++)
		{
			for (x=0;x<4;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][16] = 1;
			}
		}
	}
	
	for (z=0;z<2;z++)
	{
		for (y=0;y<5;y++)
		{
			for (x=1;x<5;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][17] = 1;
			}
		}
	}
	
	for (z=0;z<2;z++)
	{
		for (y=0;y<4;y++)
		{
			for (x=0;x<5;x++)
			{
				i = 25*z + 5*y + x;
				candidates[i][18] = 1;
			}
		}
	}
	
	for (z=0;z<2;z++)
	{
		for (y=1;y<5;y++)
		{
			for (x=0;x<5;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][19] = 1;
			}
		}
	}
	}
	
	{
	for (z=0;z<2;z++)
	{
		for (y=0;y<5;y++)
		{
			for (x=0;x<4;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][20] = 1;
			}
		}
	}
	
	for (z=0;z<2;z++)
	{
		for (y=0;y<5;y++)
		{
			for (x=1;x<5;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][21] = 1;
			}
		}
	}
	
	for (z=0;z<2;z++)
	{
		for (y=0;y<4;y++)
		{
			for (x=0;x<5;x++)
			{
				i = 25*z + 5*y + x;
				candidates[i][22] = 1;
			}
		}
	}
	
	for (z=0;z<2;z++)
	{
		for (y=1;y<5;y++)
		{
			for (x=0;x<5;x++)			
			{
				i = 25*z + 5*y + x;
				candidates[i][23] = 1;
			}
		}
	}
	}
	return (0);
}

class cube
{
	public:
	unsigned int entries [125];
	cube()
	{
		unsigned int i;
		
		for (i=0;i<125;i++)
		{	
			entries[i] = 1;
		}
		
	}
	
	int checkelement(const unsigned int incoord, const unsigned int* config)
	{
		unsigned int i;
		
		unsigned int colls = 5;
		
		for (i=0;i<5;i++)
		{
			colls -= entries[incoord + config[i]];
		}
		
		return colls;
	}
	
	cube addelement(const unsigned int incoord, const unsigned int* config)
	{
		cube dumcub = cube(); 
		unsigned int i;
		
		for (i=0;i<125;i++)
		{	
			dumcub.entries[i] = entries[i];
		}
		
		for (i=0;i<5;i++)
		{
			dumcub.entries[incoord + config[i]] = 0;
		}
		
		return dumcub;
	}
	
};

int solvecube(const int nelements, cube incube, unsigned int* * solution , unsigned int* * candidates )
{
	unsigned int i,baselement;
	
// 	cout << "entering " << nelements << endl;
	
	if (nelements == 25)
	{
		for (i=0;i<25;i++)
		{
			cout << solution[i][0] << "    " << solution[i][1] << endl;
		}
		cout << endl;
		return (0);
	}
	
	baselement = 0;
	for (i=0;i<125;i++)
	{
		if (incube.entries[i] == 1)
		{
			baselement = i;
			break;
		}
	}
	
	for (i=0; i<24; i++)
	{
		if (candidates[baselement][i])
		{
			if( incube.checkelement(baselement, configs[i]) == 0 )
			{
				solution[nelements][0] = baselement;
				solution[nelements][1] = i;
				
				solvecube(nelements+1, incube.addelement(baselement , configs[i]) , solution , candidates );
			}
		}
		
	}
	return (0);
	
	
}

int main()
{
	unsigned int i;
	
	unsigned int ** solution = new unsigned int* [25]; // [25][2];
	unsigned int ** candidates = new unsigned int* [125]; // [125][24];
	for (i = 0; i < 25; i++)
	{
		solution[i] = new unsigned int [2];
	}
	
	for (i = 0; i < 125; i++)
	{
		candidates[i] = new unsigned int [24];
	}
	
	preparecandidates( &(*candidates) );
	
	cube bascube = cube();
	
	solvecube(0, bascube, solution , candidates );
	
}