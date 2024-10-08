const Collision physsphere_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(14),
	COL_VERTEX(0, -71, -71),
	COL_VERTEX(0, 0, -100),
	COL_VERTEX(100, 0, 0),
	COL_VERTEX(71, -71, 0),
	COL_VERTEX(0, 71, -71),
	COL_VERTEX(0, 100, 0),
	COL_VERTEX(71, 71, 0),
	COL_VERTEX(0, -100, 0),
	COL_VERTEX(0, -71, 71),
	COL_VERTEX(0, 71, 71),
	COL_VERTEX(0, 0, 100),
	COL_VERTEX(-71, 71, 0),
	COL_VERTEX(-71, -71, 0),
	COL_VERTEX(-100, 0, 0),
	COL_TRI_INIT(SURFACE_DEFAULT, 24),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(7, 0, 3),
	COL_TRI(1, 4, 6),
	COL_TRI(1, 6, 2),
	COL_TRI(7, 3, 8),
	COL_TRI(2, 6, 9),
	COL_TRI(2, 9, 10),
	COL_TRI(3, 2, 10),
	COL_TRI(3, 10, 8),
	COL_TRI(6, 5, 9),
	COL_TRI(9, 5, 11),
	COL_TRI(7, 8, 12),
	COL_TRI(10, 9, 11),
	COL_TRI(10, 11, 13),
	COL_TRI(8, 10, 13),
	COL_TRI(8, 13, 12),
	COL_TRI(12, 13, 1),
	COL_TRI(12, 1, 0),
	COL_TRI(11, 5, 4),
	COL_TRI(7, 12, 0),
	COL_TRI(13, 11, 4),
	COL_TRI(13, 4, 1),
	COL_TRI_STOP(),
	COL_END()
};
