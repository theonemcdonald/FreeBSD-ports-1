--- src/main.c.orig	Thu Oct 28 20:27:54 2004
+++ src/main.c	Thu Oct 28 20:29:00 2004
@@ -777,10 +777,10 @@
 	/* windows */
 	for (node = list; node; node = g_list_next(node))
 	{
+		KzWindow *window;
 		GList *tabs, *tabnode;
 		KzBookmark *window_bookmark = KZ_BOOKMARK(node->data);
 		tabs = kz_bookmark_get_children(window_bookmark);
-		KzWindow *window;
 
 		window = KZ_WINDOW(kz_window_new(NULL));
 	       	/* 
