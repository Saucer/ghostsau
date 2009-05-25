/*

   Copyright [2008] [Trevor Hogan]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

   CODE PORTED FROM THE ORIGINAL GHOST PROJECT: http://ghost.pwner.org/

*/

#ifndef PACKED_H
#define PACKED_H

//
// CPacked
//

class CPacked
{
public:
	CGHost *m_GHost;

protected:
	bool m_Valid;
	string m_Compressed;
	string m_Decompressed;
	uint32_t m_ReplayLength;

public:
	CPacked( CGHost *nGHost );
	virtual ~CPacked( );

	virtual bool GetValid( )	{ return m_Valid; }

	virtual void Load( string fileName, bool allBlocks );
	virtual bool Save( string fileName );
	virtual bool Extract( string inFileName, string outFileName );
	virtual bool Pack( string inFileName, string outFileName );
	virtual void Decompress( bool allBlocks );
	virtual void Compress( );
};

#endif
