C $Header: /u/gcmpack/MITgcm/utils/exch2/code-mods/s24t_8x32/W2_EXCH2_TOPOLOGY.h,v 1.2 2008/07/29 19:37:49 jmc Exp $
C $Name:  $

C      *** THIS FILE IS AUTOMATICALLY GENERATED ***
C---   Tiling topology data structures header file
C      NTILES            :: Number of tiles in this topology 
C      MAX_NEIGHBOURS    :: Maximum number of neighbours any tile has.
C      exch2_domain_nxt  :: Total domain length in tiles. 
C      exch2_domain_nyt  :: Maximum domain height in tiles. 
C      exch2_global_Nx   :: Global-file domain length.
C      exch2_global_Ny   :: Global-file domain height.
C      exch2_tNx         :: Size in X for each tile.
C      exch2_tNy         :: Size in Y for each tile.
C      exch2_tBasex      :: Tile offset in X within its sub-domain (cube face)
C      exch2_tBasey      :: Tile offset in Y within its sub-domain (cube face)
C      exch2_txGlobalo   :: Tile base X index within global index space.
C      exch2_tyGlobalo   :: Tile base Y index within global index space.
C      exch2_isWedge     :: 1 if West  is at domain edge, 0 if not.
C      exch2_isNedge     :: 1 if North is at domain edge, 0 if not.
C      exch2_isEedge     :: 1 if East  is at domain edge, 0 if not.
C      exch2_isSedge     :: 1 if South is at domain edge, 0 if not.
C      exch2_myFace      :: Face number for each tile (used for I/O).
C      exch2_mydNx       :: Face size in X for each tile (for I/O).
C      exch2_mydNy       :: Face size in Y for each tile (for I/O).
C      exch2_tProc       :: Rank of process owning tile (filled at run time).
C      exch2_nNeighbours :: Tile neighbour entries count.
C      exch2_neighbourId :: Tile number for each neighbour entry.
C      exch2_opposingSend:: Neighbour entry in target tile send 
C                        :: which has this tile and neighbour as its target.
C      exch2_pij(:,n,t)  :: Matrix which applies to target-tile indices to get
C                        :: source-tile "t" indices, for neighbour entry "n".
C      exch2_oi(n,t)     :: Source-tile "t" X index offset in target
C                        :: to source connection (neighbour entry "n").
C      exch2_oj(n,t)     :: Source-tile "t" Y index offset in target
C                        :: to source connection (neighbour entry "n").
       INTEGER NTILES
       INTEGER MAX_NEIGHBOURS
       INTEGER exch2_domain_nyt
       INTEGER exch2_domain_nxt
       INTEGER exch2_global_Nx
       INTEGER exch2_global_Ny
       PARAMETER ( NTILES = 24)
       PARAMETER ( MAX_NEIGHBOURS = 7)
       PARAMETER ( exch2_domain_nxt=24)
       PARAMETER ( exch2_domain_nyt=1)
       PARAMETER ( exch2_global_Nx = 192)
       PARAMETER ( exch2_global_Ny = 32)
       INTEGER exch2_tNx(NTILES)
       INTEGER exch2_tNy(NTILES)
       INTEGER exch2_tBasex(NTILES)
       INTEGER exch2_tBasey(NTILES)
       INTEGER exch2_txGlobalo(NTILES)
       INTEGER exch2_tyGlobalo(NTILES)
       INTEGER exch2_isWedge(NTILES)
       INTEGER exch2_isNedge(NTILES)
       INTEGER exch2_isEedge(NTILES)
       INTEGER exch2_isSedge(NTILES)
       INTEGER exch2_myFace(NTILES)
       INTEGER exch2_mydNx(NTILES)
       INTEGER exch2_mydNy(NTILES)
       INTEGER exch2_tProc(NTILES)
       INTEGER exch2_nNeighbours(NTILES)
       INTEGER exch2_neighbourId(MAX_NEIGHBOURS,NTILES)
       INTEGER exch2_opposingSend(MAX_NEIGHBOURS,NTILES)
       INTEGER exch2_pij(4,MAX_NEIGHBOURS,NTILES)
       INTEGER exch2_oi(MAX_NEIGHBOURS,NTILES)
       INTEGER exch2_oj(MAX_NEIGHBOURS,NTILES)

       COMMON /W2_EXCH2_TOPO_I/
     &        exch2_tNx, exch2_tNy,
     &        exch2_tBasex, exch2_tBasey,
     &        exch2_txGlobalo,exch2_tyGlobalo,
     &        exch2_isWedge, exch2_isNedge,
     &        exch2_isEedge, exch2_isSedge,
     &        exch2_myFace, exch2_mydNx, exch2_mydNy,
     &        exch2_tProc,
     &        exch2_nNeighbours, exch2_neighbourId,
     &        exch2_opposingSend,
     &        exch2_pij,
     &        exch2_oi, exch2_oj

C---   Exchange execution loop data structures
C      exch2_iLo,iHi(n,t) :: X-index range of this tile "t" halo-region
C                         :: to be updated with neighbour entry "n".
C      exch2_jLo,jHi(n,t) :: Y-index range of this tile "t" halo-region
C                         :: to be updated with neighbour entry "n".
       INTEGER exch2_iLo(MAX_NEIGHBOURS,NTILES)
       INTEGER exch2_iHi(MAX_NEIGHBOURS,NTILES)
       INTEGER exch2_jLo(MAX_NEIGHBOURS,NTILES)
       INTEGER exch2_jHi(MAX_NEIGHBOURS,NTILES)
       COMMON /W2_EXCH2_HALO_SPEC/
     &        exch2_iLo, exch2_iHi,
     &        exch2_jLo, exch2_jHi

