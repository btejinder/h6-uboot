# i n c l u d e   " d e _ h a l . h " 
 
 s t a t i c   u n s i g n e d   i n t   g _ d e v i c e _ f p s [ D E _ N U M ]   =   {   6 0   } ; 
 s t a t i c   b o o l   g _ d e _ b l a n k [ D E _ N U M ]   =   {   f a l s e   } ; 
 s t a t i c   u n s i g n e d   i n t   g _ d e _ f r e q ; 
 s t a t i c   s t r u c t   d i s p _ e n h a n c e _ c h n _ i n f o   e h s _ i n f o ; 
 
 i n t   d e _ u p d a t e _ d e v i c e _ f p s ( u n s i g n e d   i n t   s e l ,   u 3 2   f p s ) 
 { 
 	 g _ d e v i c e _ f p s [ s e l ]   =   f p s ; 
 
 	 r e t u r n   0 ; 
 } 
 
 / * * 
   *   U p d a t e   c l k   r a t e   o f   d e ,   u n i t   h z . 
   * / 
 i n t   d e _ u p d a t e _ c l k _ r a t e ( u 3 2   r a t e ) 
 { 
 	 g _ d e _ f r e q   =   r a t e   /   1 0 0 0 0 0 0 ; 
 
 	 r e t u r n   0 ; 
 } 
 
 / * * 
   *   G e t   c l k   r a t e   o f   d e ,   u n i t   h z . 
   * / 
 i n t   d e _ g e t _ c l k _ r a t e ( v o i d ) 
 { 
 	 r e t u r n   g _ d e _ f r e q   *   1 0 0 0 0 0 0 ; 
 } 
 
 s t a t i c   i n t   d e _ s e t _ c o a r s e ( u n s i g n e d   i n t   s e l ,   u n s i g n e d   c h a r   c h n o ,   u n s i g n e d   i n t   f m t , 
 	 	 	   u n s i g n e d   i n t   l c d _ f p s ,   u n s i g n e d   i n t   l c d _ h e i g h t , 
 	 	 	   u n s i g n e d   i n t   d e _ f r e q _ m h z ,   u n s i g n e d   i n t   o v l _ w , 
 	 	 	   u n s i g n e d   i n t   o v l _ h ,   u n s i g n e d   i n t   v s u _ o u t w , 
 	 	 	   u n s i g n e d   i n t   v s u _ o u t h ,   u n s i g n e d   i n t   * m i d y w , 
 	 	 	   u n s i g n e d   i n t   * m i d y h ,   s t r u c t   s c a l e r _ p a r a   * f i x _ y p a r a , 
 	 	 	   s t r u c t   s c a l e r _ p a r a   * f i x _ c p a r a ) 
 { 
 	 i n t   c o a r s e _ s t a t u s ; 
 	 u n s i g n e d   i n t   m i d c w ,   m i d c h ; 
 
 	 c o a r s e _ s t a t u s   =   d e _ r t m x _ s e t _ c o a r s e _ f a c ( s e l ,   c h n o ,   f m t ,   l c d _ f p s , 
 	 	 	 	 	               l c d _ h e i g h t ,   d e _ f r e q _ m h z , 
 	 	 	 	 	               o v l _ w ,   o v l _ h ,   v s u _ o u t w ,   v s u _ o u t h , 
 	 	 	 	 	               m i d y w ,   m i d y h ,   & m i d c w ,   & m i d c h ) ; 
 	 d e _ v s u _ r e c a l c _ s c a l e _ p a r a ( c o a r s e _ s t a t u s ,   v s u _ o u t w ,   v s u _ o u t h , 
 	 	 	 	   * m i d y w ,   * m i d y h ,   m i d c w ,   m i d c h , 
 	 	 	 	   f i x _ y p a r a ,   f i x _ c p a r a ) ; 
 
 	 r e t u r n   0 ; 
 } 
 
 s t a t i c   i n t   d e _ c a l c _ o v e r l a y _ s c a l e r _ p a r a ( u n s i g n e d   i n t   s c r e e n _ i d , 
 	 	 u n s i g n e d   c h a r   c h n ,   u n s i g n e d   c h a r   l a y n o , 
 	 	 u n s i g n e d   c h a r   * f m t ,   s t r u c t   d i s p _ l a y e r _ c o n f i g _ d a t a   * d a t a , 
 	 	 u n s i g n e d   c h a r   ( * p r e m u l ) [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] , 
 	 	 u n s i g n e d   c h a r   * p r e m o d e , 
 	 	 s t r u c t   d e _ r e c t ( * c r o p ) [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] , 
 	 	 s t r u c t   d e _ r e c t ( * l a y e r ) [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] , 
 	 	 s t r u c t   d e _ r e c t   * b l d _ r e c t ,   u n s i g n e d   i n t   * o v l w , 
 	 	 u n s i g n e d   i n t   * o v l h ,   u n s i g n e d   c h a r   * p e n , 
 	 	 s t r u c t   s c a l e r _ p a r a   * o v l _ p a r a , 
 	 	 s t r u c t   s c a l e r _ p a r a   * o v l _ c p a r a ) 
 { 
 	 b o o l   s c a l e r _ e n ; 
 	 u n s i g n e d   c h a r   i ,   j ,   k ,   l a y _ e n [ C H N _ N U M ] [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] ; 
 	 u n s i g n e d   i n t   m i d y w ,   m i d y h ; 
 	 u n s i g n e d   i n t   l c d _ f p s   =   g _ d e v i c e _ f p s [ s c r e e n _ i d ] ; 
 	 u n s i g n e d   i n t   l c d _ w i d t h   =   1 2 8 0 ,   l c d _ h e i g h t   =   7 2 0 ; 
 	 u n s i g n e d   i n t   d e _ f r e q _ m h z   =   g _ d e _ f r e q ; 
 	 s t r u c t   d e _ r e c t 6 4   c r o p 6 4 [ C H N _ N U M ] [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] ; 
 	 s t r u c t   d e _ r e c t   f r a m e [ C H N _ N U M ] [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] ; 
 	 s t a t i c   s t r u c t   s c a l e r _ p a r a   p a r a [ C H N _ N U M ] [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] ; 
 	 s t a t i c   s t r u c t   s c a l e r _ p a r a   c p a r a [ V I _ C H N _ N U M ] [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] ; 
 	 u n s i g n e d   i n t   v i _ c h n   =   d e _ f e a t _ g e t _ n u m _ v i _ c h n s ( s c r e e n _ i d ) ; 
 	 u n s i g n e d   i n t   s c a l e r _ n u m   =   d e _ f e a t _ i s _ s u p p o r t _ s c a l e ( s c r e e n _ i d ) ; 
 
 	 d e _ r t m x _ g e t _ d i s p l a y _ s i z e ( s c r e e n _ i d ,   & l c d _ w i d t h ,   & l c d _ h e i g h t ) ; 
 	 / *   i n i t   p a r a   * / 
 	 f o r   ( j   =   0 ;   j   <   v i _ c h n ;   j + + ) 
 	 	 m e m s e t ( ( v o i d   * ) c p a r a [ j ] ,   0 ,   l a y n o   *   s i z e o f ( s t r u c t   s c a l e r _ p a r a ) ) ; 
 	 f o r   ( j   =   0 ;   j   <   c h n ;   j + + ) 
 	 	 m e m s e t ( ( v o i d   * ) p a r a [ j ] ,   0 ,   l a y n o   *   s i z e o f ( s t r u c t   s c a l e r _ p a r a ) ) ; 
 
 	 / *   g e t   t h e   o r i g i n a l   c r o p   f r a m e   d a t a   * / 
 	 f o r   ( j   =   0 ,   k   =   0 ;   j   <   c h n ;   j + + )   { 
 	 	 f o r   ( i   =   0 ;   i   <   l a y n o ; )   { 
 	 	 	 m e m c p y ( & c r o p 6 4 [ j ] [ i ] ,   & d a t a [ k ] . c o n f i g . i n f o . f b . c r o p , 
 	 	 	               s i z e o f ( s t r u c t   d i s p _ r e c t 6 4 ) ) ; 
 	 	 	 m e m c p y ( & f r a m e [ j ] [ i ] ,   & d a t a [ k ] . c o n f i g . i n f o . s c r e e n _ w i n , 
 	 	 	               s i z e o f ( s t r u c t   d i s p _ r e c t ) ) ; 
 	 	 	 l a y _ e n [ j ] [ i ]   =   d a t a [ k ] . c o n f i g . e n a b l e ; 
 	 	 	 p r e m u l [ j ] [ i ]   =   d a t a [ k ] . c o n f i g . i n f o . f b . p r e _ m u l t i p l y ; 
 
 	 	 	 / *   3 d   m o d e   * / 
 	 	 	 i f   ( d a t a [ k ] . c o n f i g . i n f o . f b . f l a g s )   { 
 	 	 	 	 m e m c p y ( & c r o p 6 4 [ j ] [ i   +   1 ] , 
 	 	 	 	               & d a t a [ k ] . c o n f i g . i n f o . f b . c r o p , 
 	 	 	 	               s i z e o f ( s t r u c t   d i s p _ r e c t 6 4 ) ) ; 
 	 	 	 	 d e _ r t m x _ g e t _ 3 d _ i n _ s i n g l e _ s i z e ( 
 	 	 	 	         ( e n u m   d e _ 3 d _ i n _ m o d e ) 
 	 	 	 	         d a t a [ k ] . c o n f i g . i n f o . f b . f l a g s , 
 	 	 	 	         & c r o p 6 4 [ j ] [ i ] ) ; 
 	 	 	 	 i f   ( d a t a [ k ] . c o n f i g . i n f o . b _ t r d _ o u t )   { 
 	 	 	 	 	 d e _ r t m x _ g e t _ 3 d _ i n _ s i n g l e _ s i z e ( 
 	 	 	 	 	         ( e n u m   d e _ 3 d _ i n _ m o d e ) 
 	 	 	 	 	         d a t a [ k ] . c o n f i g . i n f o . f b . f l a g s , 
 	 	 	 	 	         & c r o p 6 4 [ j ] [ i   +   1 ] ) ; 
 	 	 	 	 	 d e _ r t m x _ g e t _ 3 d _ o u t ( f r a m e [ j ] [ i ] , 
 	 	 	 	 	         l c d _ w i d t h ,   l c d _ h e i g h t , 
 	 	 	 	 	         ( e n u m   d e _ 3 d _ o u t _ m o d e ) 
 	 	 	 	 	         d a t a [ k ] . c o n f i g . i n f o . o u t _ t r d _ m o d e , 
 	 	 	 	 	         & f r a m e [ j ] [ i   +   1 ] ) ; 
 	 	 	 	 	 l a y _ e n [ j ] [ i   +   1 ]   = 
 	 	 	 	 	         d a t a [ k ] . c o n f i g . e n a b l e ; 
 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 l a y _ e n [ j ] [ i   +   1 ]   =   0 ; 
 	 	 	 	 } 
 	 	 	 	 p r e m u l [ j ] [ i   +   1 ]   = 
 	 	 	 	         d a t a [ k ] . c o n f i g . i n f o . f b . p r e _ m u l t i p l y ; 
 	 	 	 	 k   + =   2 ; 
 	 	 	 	 i   + =   2 ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 i + + ; 
 	 	 	 	 k + + ; 
 	 	 	 } 
 	 	 } 
 	 } 
 
 	 f o r   ( j   =   0 ;   j   <   v i _ c h n ;   j + + )   { 
 	 	 f o r   ( i   =   0 ;   i   <   l a y n o ;   i + + )   { 
 	 	 	 i f   ( l a y _ e n [ j ] [ i ] ) 
 	 	 	 	 d e _ v s u _ c a l c _ s c a l e r _ p a r a ( f m t [ j ] ,   c r o p 6 4 [ j ] [ i ] , 
 	 	 	 	         f r a m e [ j ] [ i ] ,   & c r o p [ j ] [ i ] , 
 	 	 	 	         & p a r a [ j ] [ i ] ,   & c p a r a [ j ] [ i ] ) ; 
 	 	 } 
 	 } 
 
 	 f o r   ( j   =   v i _ c h n ;   j   <   c h n ;   j + + )   { 
 	 	 f o r   ( i   =   0 ;   i   <   l a y n o ;   i + + )   { 
 	 	 	 i f   ( l a y _ e n [ j ] [ i ] ) 
 	 	 	 	 d e _ g s u _ c a l c _ s c a l e r _ p a r a ( c r o p 6 4 [ j ] [ i ] , 
 	 	 	 	         f r a m e [ j ] [ i ] ,   & c r o p [ j ] [ i ] ,   & p a r a [ j ] [ i ] ) ; 
 	 	 } 
 	 } 
 
 	 / *   c a l c u l a t e   t h e   l a y e r   c o o r d i n a t e , 
 	   *   o v e r l a y   s i z e   &   b l e n d i n g   i n p u t   c o o r d i n a t e   * / 
 	 f o r   ( j   =   0 ;   j   <   c h n ;   j + + )   { 
 	 	 i n t   g s u _ s e l   =   ( j   <   v i _ c h n )   ?   0   :   1 ; 
 	 	 p e n [ j ]   = 
 	 	         d e _ r t m x _ c a l c _ c h n r e c t ( l a y _ e n [ j ] ,   l a y n o ,   f r a m e [ j ] ,   c r o p [ j ] , 
 	 	 	 	 	   g s u _ s e l ,   p a r a [ j ] ,   l a y e r [ j ] , 
 	 	 	 	 	   & b l d _ r e c t [ j ] ,   & o v l w [ j ] ,   & o v l h [ j ] ) ; 
 	 	 p r e m o d e [ j ]   =   d e _ r t m x _ g e t _ p r e m u l _ c t l ( l a y n o ,   p r e m u l [ j ] ) ; 
 	 	 _ _ i n f ( " o v l _ r e c t [ % d ] = < % d , % d > \ n " ,   j ,   o v l w [ j ] ,   o v l h [ j ] ) ; 
 	 	 _ _ i n f ( " b l d _ r e c t [ % d ] = < % d , % d , % d , % d > \ n " ,   j , 
 	 	             b l d _ r e c t [ j ] . x ,   b l d _ r e c t [ j ] . y , 
 	 	             b l d _ r e c t [ j ] . w ,   b l d _ r e c t [ j ] . h ) ; 
 	 } 
 
 	 / *   g e t   v i d e o   o v e r l a y   p a r a m e t e r   f o r   s c a l e r   * / 
 	 f o r   ( j   =   0 ;   j   <   v i _ c h n ;   j + + )   { 
 	 	 s c a l e r _ e n   =   0 x 1 ; 
 	 	 i f   ( ( f m t [ j ]   = =   0 )   & &   ( o v l w [ j ]   = =   b l d _ r e c t [ j ] . w ) 
 	 	         & &   ( o v l h [ j ]   = =   b l d _ r e c t [ j ] . h ) )   { 
 	 	 	 s c a l e r _ e n   =   0 x 0 ; 
 	 	 } 
 	 	 i f   ( s c a l e r _ e n ) 
 	 	 	 d e _ v s u _ s e l _ o v l _ s c a l e r _ p a r a ( l a y _ e n [ j ] ,   p a r a [ j ] ,   c p a r a [ j ] , 
 	 	 	         & o v l _ p a r a [ j ] ,   & o v l _ c p a r a [ j ] ) ; 
 
 	 	 / *   r e c a l c u l a t e   o v e r l a y   s i z e ,   b l e n d i n g   c o o r d i n a t e , 
 	 	   *   b l e n d i n g   s i z e ,   l a y e r   c o o r d i n a t e   * / 
 	 	 d e _ r e c a l c _ o v l _ b l d _ f o r _ s c a l e ( s c a l e r _ e n ,   l a y _ e n [ j ] ,   l a y n o , 
 	 	 	 	 	         & o v l _ p a r a [ j ] ,   l a y e r [ j ] , 
 	 	 	 	 	         & b l d _ r e c t [ j ] ,   & o v l w [ j ] ,   & o v l h [ j ] ,   0 , 
 	 	 	 	 	         l c d _ w i d t h ,   l c d _ h e i g h t ) ; 
 
 	 	 d e _ s e t _ c o a r s e ( s c r e e n _ i d ,   j ,   f m t [ j ] ,   l c d _ f p s ,   l c d _ h e i g h t , 
 	 	 	             d e _ f r e q _ m h z ,   o v l w [ j ] ,   o v l h [ j ] , 
 	 	 	             b l d _ r e c t [ j ] . w ,   b l d _ r e c t [ j ] . h , 
 	 	 	             & m i d y w ,   & m i d y h ,   & o v l _ p a r a [ j ] ,   & o v l _ c p a r a [ j ] ) ; 
 	 	 d e _ v s u _ s e t _ p a r a ( s c r e e n _ i d ,   j ,   s c a l e r _ e n ,   f m t [ j ] ,   m i d y w ,   m i d y h , 
 	 	 	 	 b l d _ r e c t [ j ] . w ,   b l d _ r e c t [ j ] . h , 
 	 	 	 	 & o v l _ p a r a [ j ] ,   & o v l _ c p a r a [ j ] ) ; 
 	 } 
 
 	 / *   g e t   u i   o v e r l a y   p a r a m e t e r   f o r   s c a l e r   * / 
 	 f o r   ( j   =   v i _ c h n ;   j   <   s c a l e r _ n u m ;   j + + )   { 
 	 	 s c a l e r _ e n   =   0 x 1 ; 
 	 	 i f   ( ( o v l w [ j ]   = =   b l d _ r e c t [ j ] . w )   & &   ( o v l h [ j ]   = =   b l d _ r e c t [ j ] . h ) ) 
 	 	 	 s c a l e r _ e n   =   0 x 0 ; 
 	 	 i f   ( s c a l e r _ e n ) 
 	 	 	 d e _ g s u _ s e l _ o v l _ s c a l e r _ p a r a ( l a y _ e n [ j ] ,   p a r a [ j ] , 
 	 	 	 	 	 	       & o v l _ p a r a [ j ] ) ; 
 
 	 	 / *   r e c a l c u l a t e   o v e r l a y   s i z e ,   b l e n d i n g   c o o r d i n a t e , 
 	 	   *   b l e n d i n g   s i z e ,   l a y e r   c o o r d i n a t e   * / 
 	 	 d e _ r e c a l c _ o v l _ b l d _ f o r _ s c a l e ( s c a l e r _ e n ,   l a y _ e n [ j ] ,   l a y n o , 
 	 	 	 	 	         & o v l _ p a r a [ j ] ,   l a y e r [ j ] , 
 	 	 	 	 	         & b l d _ r e c t [ j ] ,   & o v l w [ j ] ,   & o v l h [ j ] ,   1 , 
 	 	 	 	 	         l c d _ w i d t h ,   l c d _ h e i g h t ) ; 
 
 	 	 d e _ g s u _ s e t _ p a r a ( s c r e e n _ i d ,   j ,   s c a l e r _ e n ,   o v l w [ j ] ,   o v l h [ j ] , 
 	 	 	 	 b l d _ r e c t [ j ] . w ,   b l d _ r e c t [ j ] . h ,   & o v l _ p a r a [ j ] ) ; 
 	 } 
 
 	 r e t u r n   0 ; 
 } 
 
 i n t   d e _ g e t _ l a y e r _ c o n f i g ( s t r u c t   d i s p _ l a y e r _ c o n f i g _ d a t a   * d a t a , 
 	 	 	 u n s i g n e d   c h a r   c h n ,   u n s i g n e d   c h a r   l a y n o , 
 	 	 	 s t r u c t   d e _ r e c t ( * c r o p ) [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] , 
 	 	 	 s t r u c t   d e _ r e c t ( * l a y e r ) [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] , 
 	 	 	 u n s i g n e d   c h a r   ( * p r e m u l ) [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] , 
 	 	 	 s t r u c t   _ _ l a y _ p a r a _ t   * c f g ) 
 { 
 	 u n s i g n e d   c h a r   i ,   j ,   k ; 
 
 	 f o r   ( j   =   0 ,   k   =   0 ;   j   <   c h n ;   j + + )   { 
 	 	 f o r   ( i   =   0 ;   i   <   l a y n o ; )   { 
 	 	 	 c f g [ k ] . e n   =   d a t a [ k ] . c o n f i g . e n a b l e ; 
 	 	 	 c f g [ k ] . a l p h a _ m o d e   =   d a t a [ k ] . c o n f i g . i n f o . a l p h a _ m o d e ; 
 	 	 	 c f g [ k ] . a l p h a   =   d a t a [ k ] . c o n f i g . i n f o . a l p h a _ v a l u e ; 
 	 	 	 c f g [ k ] . f c o l o r _ e n   =   d a t a [ k ] . c o n f i g . i n f o . m o d e ; 
 	 	 	 c f g [ k ] . f m t   =   d a t a [ k ] . c o n f i g . i n f o . f b . f o r m a t ; 
 	 	 	 c f g [ k ] . p r e m u l _ c t l   =   p r e m u l [ j ] [ i ] ; 
 
 	 	 	 c f g [ k ] . p i t c h [ 0 ]   =   d a t a [ k ] . c o n f i g . i n f o . f b . s i z e [ 0 ] . w i d t h ; 
 	 	 	 c f g [ k ] . p i t c h [ 1 ]   =   d a t a [ k ] . c o n f i g . i n f o . f b . s i z e [ 1 ] . w i d t h ; 
 	 	 	 c f g [ k ] . p i t c h [ 2 ]   =   d a t a [ k ] . c o n f i g . i n f o . f b . s i z e [ 2 ] . w i d t h ; 
 	 	 	 c f g [ k ] . l a y e r   =   l a y e r [ j ] [ i ] ; 
 	 	 	 c f g [ k ] . l a d d r _ t [ 0 ]   = 
 	 	 	         ( d a t a [ k ] . c o n f i g . i n f o . f b . a d d r [ 0 ]   &   0 x F F F F F F F F ) ; 
 	 	 	 c f g [ k ] . l a d d r _ t [ 1 ]   = 
 	 	 	         ( d a t a [ k ] . c o n f i g . i n f o . f b . a d d r [ 1 ]   &   0 x F F F F F F F F ) ; 
 	 	 	 c f g [ k ] . l a d d r _ t [ 2 ]   = 
 	 	 	         ( d a t a [ k ] . c o n f i g . i n f o . f b . a d d r [ 2 ]   &   0 x F F F F F F F F ) ; 
 
 	 	 	 c f g [ k ] . t o p _ b o t _ e n   =   0 x 0 ; 
 	 	 	 c f g [ k ] . l a d d r _ b [ 0 ]   =   0 x 0 ; 
 	 	 	 c f g [ k ] . l a d d r _ b [ 1 ]   =   0 x 0 ; 
 	 	 	 c f g [ k ] . l a d d r _ b [ 2 ]   =   0 x 0 ; 
 
 	 	 	 / *   3 d   m o d e   * / 
 	 	 	 i f   ( d a t a [ k ] . c o n f i g . i n f o . f b . f l a g s )   { 
 	 	 	 	 i f   ( d a t a [ k ] . c o n f i g . i n f o . b _ t r d _ o u t ) 
 	 	 	 	 	 c f g [ k   +   1 ] . e n   =   d a t a [ k ] . c o n f i g . e n a b l e ; 
 	 	 	 	 e l s e 
 	 	 	 	 	 c f g [ k   +   1 ] . e n   =   0 ; 
 
 	 	 	 	 c f g [ k   +   1 ] . a l p h a _ m o d e   = 
 	 	 	 	         d a t a [ k ] . c o n f i g . i n f o . a l p h a _ m o d e ; 
 	 	 	 	 c f g [ k   +   1 ] . a l p h a   = 
 	 	 	 	         d a t a [ k ] . c o n f i g . i n f o . a l p h a _ v a l u e ; 
 	 	 	 	 c f g [ k   +   1 ] . f c o l o r _ e n   =   d a t a [ k ] . c o n f i g . i n f o . m o d e ; 
 	 	 	 	 c f g [ k   +   1 ] . f m t   =   d a t a [ k ] . c o n f i g . i n f o . f b . f o r m a t ; 
 	 	 	 	 c f g [ k   +   1 ] . p r e m u l _ c t l   =   p r e m u l [ j ] [ i ] ; 
 
 	 	 	 	 c f g [ k   +   1 ] . l a y e r   =   l a y e r [ j ] [ i   +   1 ] ; 
 	 	 	 	 d e _ r t m x _ g e t _ 3 d _ i n ( d a t a [ k ] . c o n f i g . i n f o . f b . f o r m a t , 
 	 	 	 	 	 c r o p [ j ] [ i   +   1 ] , 
 	 	 	 	 	 ( s t r u c t   d e _ f b   * )   d a t a [ k ] . c o n f i g . i n f o . 
 	 	 	 	 	 f b . s i z e ,   d a t a [ k ] . c o n f i g . i n f o . f b . a l i g n , 
 	 	 	 	 	 ( e n u m   d e _ 3 d _ i n _ m o d e )   d a t a [ k ] . 
 	 	 	 	 	 c o n f i g . i n f o . f b . f l a g s ,   c f g [ k ] . l a d d r _ t , 
 	 	 	 	 	 d a t a [ k ] . c o n f i g . i n f o . f b . t r d _ r i g h t _ a d d r , 
 	 	 	 	 	 c f g [ k ] . p i t c h ,   c f g [ k   +   1 ] . p i t c h , 
 	 	 	 	 	 c f g [ k   +   1 ] . l a d d r _ t ) ; 
 
 	 	 	 	 c f g [ k   +   1 ] . t o p _ b o t _ e n   =   c f g [ k ] . t o p _ b o t _ e n ; 
 	 	 	 	 c f g [ k   +   1 ] . l a d d r _ b [ 0 ]   =   c f g [ k ] . l a d d r _ b [ 0 ] ; 
 	 	 	 	 c f g [ k   +   1 ] . l a d d r _ b [ 1 ]   =   c f g [ k ] . l a d d r _ b [ 1 ] ; 
 	 	 	 	 c f g [ k   +   1 ] . l a d d r _ b [ 2 ]   =   c f g [ k ] . l a d d r _ b [ 2 ] ; 
 	 	 	 	 d a t a [ k   +   1 ] . f l a g   =   d a t a [ k ] . f l a g ; 
 	 	 	 	 k   + =   2 ; 
 	 	 	 	 i   + =   2 ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 i + + ; 
 	 	 	 	 k + + ; 
 	 	 	 } 
 	 	 } 
 	 } 
 	 r e t u r n   0 ; 
 } 
 
 i n t   d e _ a l _ l y r _ a p p l y ( u n s i g n e d   i n t   s c r e e n _ i d ,   s t r u c t   d i s p _ l a y e r _ c o n f i g _ d a t a   * d a t a , 
 	 	         u n s i g n e d   i n t   l a y e r _ n u m , 
 	 	         s t r u c t   d i s p _ c s c _ c o n f i g   * m g r _ c s c _ c f g ) 
 { 
 	 u n s i g n e d   c h a r   i ,   j ,   k ,   c h n ,   v i _ c h n ,   l a y n o ; 
 	 u n s i g n e d   c h a r   h a d d r [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] [ 3 ] ; 
 	 u n s i g n e d   c h a r   p r e m u l [ C H N _ N U M ] [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] ,   f o r m a t [ C H N _ N U M ] , 
 	         p r e m o d e [ C H N _ N U M ] ,   z o d e r [ C H N _ N U M ]   =   {   0 ,   1 ,   2   } ,   p e n [ C H N _ N U M ] ; 
 	 u n s i g n e d   i n t   o v l w [ C H N _ N U M ] ,   o v l h [ C H N _ N U M ] ; 
 	 s t a t i c   s t r u c t   _ _ l a y _ p a r a _ t   c f g [ C H N _ N U M   *   L A Y E R _ M A X _ N U M _ P E R _ C H N ] ; 
 	 s t r u c t   d e _ r e c t   l a y e r [ C H N _ N U M ] [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] ,   b l d _ r e c t [ C H N _ N U M ] ; 
 	 s t r u c t   d e _ r e c t   c r o p [ C H N _ N U M ] [ L A Y E R _ M A X _ N U M _ P E R _ C H N ] ; 
 	 s t a t i c   s t r u c t   s c a l e r _ p a r a   o v l _ p a r a [ C H N _ N U M ] ,   o v l _ c p a r a [ V I _ C H N _ N U M ] ; 
 	 b o o l   c h n _ u s e d [ C H N _ N U M ]   =   {   f a l s e   } ,   c h n _ z o r d e r _ c f g [ C H N _ N U M ]   =   {   f a l s e   } , 
 	         c h n _ d i r t y [ C H N _ N U M ]   =   {   f a l s e   } ; 
 	 b o o l   c h n _ i s _ y u v [ C H N _ N U M ]   =   {   f a l s e   } ; 
 	 e n u m   d i s p _ c o l o r _ s p a c e   c s [ C H N _ N U M ] ; 
 	 u n s i g n e d   c h a r   l a y e r _ z o r d e r [ C H N _ N U M ]   =   {   0   } ,   c h n _ i n d e x ; 
 	 u n s i g n e d   c h a r   p i p e _ u s e d [ C H N _ N U M ]   =   {   0   } ; 
 	 u n s i g n e d   i n t   p i p e _ s e l [ C H N _ N U M ]   =   {   0   } ; 
 	 s t r u c t   d e _ r e c t   p i p e _ r e c t [ C H N _ N U M ]   =   {   { 0 }   } ; 
 	 s t r u c t   d i s p _ r e c t   d i s p s i z e [ C H N _ N U M ]   =   {   { 0 }   } ; 
 	 s t r u c t   d i s p _ l a y e r _ c o n f i g _ d a t a   * d a t a 1 ; 
 
 	 d a t a 1   =   d a t a ; 
 
 	 c h n   =   d e _ f e a t _ g e t _ n u m _ c h n s ( s c r e e n _ i d ) ; 
 	 v i _ c h n   =   d e _ f e a t _ g e t _ n u m _ v i _ c h n s ( s c r e e n _ i d ) ; 
 	 l a y n o   =   L A Y E R _ M A X _ N U M _ P E R _ C H N ; 
 
 	 m e m s e t ( & e h s _ i n f o ,   0 ,   s i z e o f ( s t r u c t   d i s p _ e n h a n c e _ c h n _ i n f o ) ) ; 
 	 / *   p a r s e   z o r d e r   o f   c h a n n e l   * / 
 	 d a t a 1   =   d a t a ; 
 	 f o r   ( i   =   0 ;   i   <   l a y e r _ n u m ;   i + + ,   d a t a 1 + + )   { 
 	 	 i f   ( ! d a t a 1 - > c o n f i g . e n a b l e ) 
 	 	 	 c o n t i n u e ; 
 
 	 	 c h n _ u s e d [ d a t a 1 - > c o n f i g . c h a n n e l ]   =   t r u e ; 
 	 	 i f   ( d a t a 1 - > c o n f i g . i n f o . f b . f o r m a t   > = 
 	 	         D I S P _ F O R M A T _ Y U V 4 4 4 _ I _ A Y U V )   { 
 	 	 	 c h n _ i s _ y u v [ d a t a 1 - > c o n f i g . c h a n n e l ]   =   t r u e ; 
 	 	 	 c s [ d a t a 1 - > c o n f i g . c h a n n e l ]   = 
 	 	 	         d a t a 1 - > c o n f i g . i n f o . f b . c o l o r _ s p a c e ; 
 	 	 } 
 	 	 i f   ( d a t a 1 - > f l a g ) 
 	 	 	 c h n _ d i r t y [ d a t a 1 - > c o n f i g . c h a n n e l ]   =   t r u e ; 
 
 	 	 l a y e r _ z o r d e r [ d a t a 1 - > c o n f i g . c h a n n e l ]   =   d a t a 1 - > c o n f i g . i n f o . z o r d e r ; 
 
 	 	 i f   ( d a t a 1 - > c o n f i g . c h a n n e l   <   v i _ c h n )   { 
 	 	 	 s t r u c t   d i s p _ e n h a n c e _ l a y e r _ i n f o   * e h s _ l a y e r _ i n f o   = 
 	 	 	 	 & e h s _ i n f o . l a y e r _ i n f o [ d a t a 1 - > c o n f i g . l a y e r _ i d ] ; 
 
 	 	 	 e h s _ l a y e r _ i n f o - > f b _ s i z e . w i d t h   = 
 	 	 	         d a t a 1 - > c o n f i g . i n f o . f b . s i z e [ 0 ] . w i d t h ; 
 	 	 	 e h s _ l a y e r _ i n f o - > f b _ s i z e . h e i g h t   = 
 	 	 	         d a t a 1 - > c o n f i g . i n f o . f b . s i z e [ 0 ] . h e i g h t ; 
 	 	 	 e h s _ l a y e r _ i n f o - > f b _ c r o p . x   = 
 	 	 	         d a t a 1 - > c o n f i g . i n f o . f b . c r o p . x   > >   3 2 ; 
 	 	 	 e h s _ l a y e r _ i n f o - > f b _ c r o p . y   = 
 	 	 	         d a t a 1 - > c o n f i g . i n f o . f b . c r o p . y   > >   3 2 ; 
 	 	 	 e h s _ l a y e r _ i n f o - > e n   =   1 ; 
 	 	 	 e h s _ l a y e r _ i n f o - > f o r m a t   =   d a t a 1 - > c o n f i g . i n f o . f b . f o r m a t ; 
 	 	 } 
 	 } 
 
 	 d a t a 1   =   d a t a ; 
 	 f o r   ( i   =   0 ;   i   <   l a y e r _ n u m ;   i + + )   { 
 	 	 i f   ( d a t a 1 - > c o n f i g . e n a b l e   & &   c h n _ d i r t y [ d a t a 1 - > c o n f i g . c h a n n e l ] ) 
 	 	 	 d a t a 1 - > f l a g   =   L A Y E R _ A L L _ D I R T Y ; 
 	 	 d a t a 1 + + ; 
 	 } 
 
 	 c h n _ i n d e x   =   0 ; 
 	 f o r   ( i   =   0 ;   i   <   c h n ;   i + + )   { 
 	 	 u 3 2   m i n _ z o r d e r   =   2 5 5 ,   m i n _ z o r d e r _ c h n   =   0 ; 
 	 	 b o o l   f i n d   =   f a l s e ; 
 	 	 f o r   ( j   =   0 ;   j   <   c h n ;   j + + )   { 
 	 	 	 i f   ( ( t r u e   = =   c h n _ u s e d [ j ] )   & &   ( t r u e   ! =   c h n _ z o r d e r _ c f g [ j ] 
 	 	 	         & &   ( m i n _ z o r d e r   >   l a y e r _ z o r d e r [ j ] ) ) )   { 
 	 	 	 	 m i n _ z o r d e r   =   l a y e r _ z o r d e r [ j ] ; 
 	 	 	 	 m i n _ z o r d e r _ c h n   =   j ; 
 	 	 	 	 f i n d   =   t r u e ; 
 	 	 	 } 
 	 	 } 
 	 	 i f   ( f i n d )   { 
 	 	 	 c h n _ z o r d e r _ c f g [ m i n _ z o r d e r _ c h n ]   =   t r u e ; 
 	 	 	 z o d e r [ m i n _ z o r d e r _ c h n ]   =   c h n _ i n d e x + + ; 
 	 	 } 
 	 } 
 
 	 / *   p a r s e   z o r d e r   o f   p i p e   * / 
 	 f o r   ( i   =   0 ;   i   <   c h n ;   i + + )   { 
 	 	 i f   ( c h n _ u s e d [ i ] )   { 
 	 	 	 u 3 2   p i p e _ i n d e x   =   z o d e r [ i ] ; 
 
 	 	 	 p i p e _ u s e d [ p i p e _ i n d e x ]   =   ( g _ d e _ b l a n k [ s c r e e n _ i d ] )   ? 
 	 	 	         f a l s e   :   t r u e ; 
 	 	 	 p i p e _ s e l [ p i p e _ i n d e x ]   =   i ; 
 	 	 } 
 	 } 
 	 f o r   ( i   =   0 ;   i   <   c h n ;   i + + ) 
 	 	 _ _ i n f ( " c h % d   z   % d   % s \ n " ,   i ,   z o d e r [ i ] , 
 	 	             c h n _ u s e d [ i ]   ?   " e n "   :   " d i s " ) ; 
 	 f o r   ( i   =   0 ;   i   <   c h n ;   i + + ) 
 	 	 _ _ i n f ( " p i p e % d   z   % d   % s \ n " ,   i ,   p i p e _ s e l [ i ] , 
 	 	             p i p e _ u s e d [ i ]   ?   " e n "   :   " d i s " ) ; 
 
 	 / *   i n i t   p a r a   * / 
 	 f o r   ( j   =   0 ;   j   <   c h n ;   j + + ) 
 	 	 m e m s e t ( ( v o i d   * ) c r o p [ j ] ,   0 x 0 ,   l a y n o   *   s i z e o f ( s t r u c t   d e _ r e c t ) ) ; 
 
 	 / *   c h e c k   t h e   v i d e o   f o r m a t   f o r   f i l l   c o l o r , 
 	   *   b e c a u s e   o f   t h e   h a r d w a r e   l i m i t   * / 
 	 f o r   ( j   =   0 ,   k   =   0 ;   j   <   v i _ c h n ;   j + + )   { 
 	 	 f o r m a t [ j ]   =   0 ; 
 	 	 f o r   ( i   =   0 ;   i   <   l a y n o ;   i + + )   { 
 	 	 	 i f   ( d a t a [ k ] . c o n f i g . i n f o . f b . f o r m a t   > = 
 	 	 	 	         D I S P _ F O R M A T _ Y U V 4 2 2 _ I _ Y V Y U ) 
 	 	 	 	 f o r m a t [ j ]   =   d a t a [ k ] . c o n f i g . i n f o . f b . f o r m a t ; 
 	 	 	 k + + ; 
 	 	 } 
 	 	 _ _ i n f ( " f o r m a t [ % d ] = % d \ n " ,   j ,   f o r m a t [ j ] ) ; 
 	 } 
 
 	 d e _ c a l c _ o v e r l a y _ s c a l e r _ p a r a ( s c r e e n _ i d ,   c h n ,   l a y n o ,   f o r m a t ,   d a t a ,   p r e m u l , 
 	 	 	 	         p r e m o d e ,   c r o p ,   l a y e r ,   b l d _ r e c t ,   o v l w ,   o v l h , 
 	 	 	 	         p e n ,   o v l _ p a r a ,   o v l _ c p a r a ) ; 
 
 	 f o r   ( j   =   0 ;   j   <   c h n ;   j + + )   { 
 	 	 i f   ( c h n _ u s e d [ j ] )   { 
 	 	 	 s t r u c t   d i s p _ c s c _ c o n f i g   c s c _ c f g ; 
 	 	 	 
 	 	 	 c s c _ c f g . i n _ f m t   =   ( c h n _ i s _ y u v [ j ] )   ?   D E _ Y U V   :   D E _ R G B ; 
 	 	 	 / /   T B D   :   1 . D I S P _ U N D E F / D I S P _ U N D E F _ F / D I S P _ R E S E R V E D / D I S P _ R E S E R V E D _ F   Yt
 	 	 	 / /               2 . nx??o u t p u t   3 *N?Spe?vcknx'`
 	 	 	 c s c _ c f g . i n _ m o d e   =   c s [ j ]   &   0 x F ; 
 	 	 	 c s c _ c f g . i n _ c o l o r _ r a n g e   =   ( ( c s [ j ]   &   0 x F 0 0 )   = =   0 x 1 0 0 )   ? 
 	 	 	         D I S P _ C O L O R _ R A N G E _ 1 6 _ 2 3 5   :   D I S P _ C O L O R _ R A N G E _ 0 _ 2 5 5 ; 
 	 	 	 c s c _ c f g . o u t _ f m t   =   m g r _ c s c _ c f g - > o u t _ f m t ; 
 	 	 	 c s c _ c f g . o u t _ m o d e   =   m g r _ c s c _ c f g - > o u t _ m o d e   &   0 x F ; 
 	 	 	 c s c _ c f g . o u t _ c o l o r _ r a n g e   =   m g r _ c s c _ c f g - > o u t _ c o l o r _ r a n g e ; 
 	 	 	 d e _ c c s c _ a p p l y ( s c r e e n _ i d ,   j ,   & c s c _ c f g ) ; 
 	 	 } 
 	 } 
 
 	 / *   i n i t   c f g   f r o m   l a y e r   c o n f i g   * / 
 	 d e _ g e t _ l a y e r _ c o n f i g ( d a t a ,   c h n ,   l a y n o ,   c r o p ,   l a y e r ,   p r e m u l ,   c f g ) ; 
 
 	 f o r   ( j   =   0 ,   k   =   0 ;   j   <   c h n ;   j + + )   { 
 	 	 f o r   ( i   =   0 ;   i   <   l a y n o ;   i + + )   { 
 	 	 	 i f   ( L A Y E R _ S I Z E _ D I R T Y   &   d a t a [ k   +   i ] . f l a g )   { 
 	 	 	 	 d e _ r t m x _ s e t _ o v e r l a y _ s i z e ( s c r e e n _ i d ,   j ,   o v l w [ j ] , 
 	 	 	 	 	 	 	   o v l h [ j ] ) ; 
 	 	 	 	 b r e a k ; 
 	 	 	 } 
 	 	 } 
 
 	 	 f o r   ( i   =   0 ;   i   <   l a y n o ;   i + + )   { 
 	 	 	 i f   ( L A Y E R _ A T T R _ D I R T Y   &   d a t a [ k ] . f l a g )   { 
 	 	 	 	 d e _ r t m x _ s e t _ l a y _ c f g ( s c r e e n _ i d ,   j ,   i , 
 	 	 	 	 	 	         & c f g [ k ] ) ; 
 	 	 	 	 d e _ r t m x _ s e t _ l a y _ l a d d r ( s c r e e n _ i d ,   j ,   i , 
 	 	 	 	 	 	             c f g [ k ] . f m t , 
 	 	 	 	 	 	             c r o p [ j ] [ i ] , 
 	 	 	 	 	 	             c f g [ k ] . p i t c h , 
 	 	 	 	 	 	             d a t a [ k ] . c o n f i g . i n f o . f b . 
 	 	 	 	 	 	             a l i g n , 
 	 	 	 ( e n u m   d e _ 3 d _ i n _ m o d e ) d a t a [ k ] . c o n f i g . i n f o . f b . f l a g s , 
 	 	 	 	 	 	             c f g [ k ] . l a d d r _ t , 
 	 	 	 	 	 	             h a d d r [ i ] ) ; 
 	 	 	 } 
 	 	 	 i f   ( L A Y E R _ V I _ F C _ D I R T Y   &   d a t a [ k ] . f l a g )   { 
 	 	 	 	 d e _ r t m x _ s e t _ l a y _ f c o l o r ( s c r e e n _ i d ,   j ,   i , 
 	 	 	 	 	 	               d a t a [ k ] . c o n f i g . i n f o . m o d e , 
 	 	 	 	 	 	               f o r m a t [ j ] , 
 	 	 	 	 	 	               d a t a [ k ] . c o n f i g . i n f o . c o l o r 
 	 	 	 	 	 	               ) ; 
 	 	 	 } 
 	 	 	 i f   ( L A Y E R _ H A D D R _ D I R T Y   &   d a t a [ k ] . f l a g )   { 
 	 	 	 	 c f g [ k ] . h a d d r _ t [ 0 ]   = 
 	 	 	 	         ( ( d a t a [ k ] . c o n f i g . i n f o . f b . 
 	 	 	 	             a d d r [ 0 ]   > >   3 2 )   &   0 x F F )   +   h a d d r [ i ] [ 0 ] ; 
 	 	 	 	 c f g [ k ] . h a d d r _ t [ 1 ]   = 
 	 	 	 	         ( ( d a t a [ k ] . c o n f i g . i n f o . f b . 
 	 	 	 	             a d d r [ 1 ]   > >   3 2 )   &   0 x F F )   +   h a d d r [ i ] [ 1 ] ; 
 	 	 	 	 c f g [ k ] . h a d d r _ t [ 2 ]   = 
 	 	 	 	         ( ( d a t a [ k ] . c o n f i g . i n f o . f b . 
 	 	 	 	             a d d r [ 2 ]   > >   3 2 )   &   0 x F F )   +   h a d d r [ i ] [ 2 ] ; 
 
 	 	 	 	 c f g [ k ] . h a d d r _ b [ 0 ]   =   0 x 0 ; 
 	 	 	 	 c f g [ k ] . h a d d r _ b [ 1 ]   =   0 x 0 ; 
 	 	 	 	 c f g [ k ] . h a d d r _ b [ 2 ]   =   0 x 0 ; 
 	 	 	 	 d e _ r t m x _ s e t _ l a y _ h a d d r ( s c r e e n _ i d ,   j ,   i , 
 	 	 	 	 	 	             c f g [ k ] . t o p _ b o t _ e n , 
 	 	 	 	 	 	             c f g [ k ] . h a d d r _ t , 
 	 	 	 	 	 	             c f g [ k ] . h a d d r _ b ) ; 
 	 	 	 } 
 	 	 	 k + + ; 
 	 	 } 
 	 } 
 
 	 / *   p a r s e   p i p e   r e c t   * / 
 	 f o r   ( i   =   0 ;   i   <   c h n ;   i + + )   { 
 	 	 i f   ( p i p e _ u s e d [ i ] )   { 
 	 	 	 u 3 2   c h n _ i n d e x   =   p i p e _ s e l [ i ] ; 
 	 	 	 m e m c p y ( & p i p e _ r e c t [ i ] ,   & b l d _ r e c t [ c h n _ i n d e x ] , 
 	 	 	               s i z e o f ( s t r u c t   d i s p _ r e c t ) ) ; 
 	 	 	 d i s p s i z e [ i ] . w i d t h   =   b l d _ r e c t [ i ] . w ; 
 	 	 	 d i s p s i z e [ i ] . h e i g h t   =   b l d _ r e c t [ i ] . h ; 
 	 	 } 
 	 } 
 	 / *   n e e d   r o u t e   i n f o r m a t i o n   t o   c a l c u l a t e   p i p e   e n a b l e   a n d   i n p u t   s i z e   * / 
 	 d e _ r t m x _ s e t _ p f _ e n ( s c r e e n _ i d ,   p i p e _ u s e d ) ; 
 	 f o r   ( i   =   0 ;   i   <   c h n ;   i + + )   { 
 	 	 _ _ i n f ( " s e l = % d ,   p i p e _ r e c t [ % d ] = < % d , % d , % d , % d > \ n " ,   s c r e e n _ i d ,   i , 
 	 	             p i p e _ r e c t [ i ] . x ,   p i p e _ r e c t [ i ] . y , 
 	 	             p i p e _ r e c t [ i ] . w ,   p i p e _ r e c t [ i ] . h ) ; 
 	 	 d e _ r t m x _ s e t _ p i p e _ c f g ( s c r e e n _ i d ,   i ,   0 x f f 0 0 0 0 0 0 ,   p i p e _ r e c t [ i ] ) ; 
 	 	 d e _ r t m x _ s e t _ r o u t e ( s c r e e n _ i d ,   i ,   p i p e _ s e l [ i ] ) ; 
 	 	 d e _ r t m x _ s e t _ p r e m u l ( s c r e e n _ i d ,   i ,   p r e m o d e [ i ] ) ; 
 	 } 
 
 	 f o r   ( i   =   0 ;   i   <   c h n   -   1 ;   i + + ) 
 	 	 d e _ r t m x _ s e t _ b l e n d _ m o d e ( s c r e e n _ i d ,   i ,   D E _ B L D _ S R C O V E R ) ; 
 	 / *   d e _ r t m x _ s e t _ c o l o r k e y ( s c r e e n _ i d , ) ;   * / 
 
 	 e h s _ i n f o . o v l _ s i z e . w i d t h   =   o v l w [ 0 ] ; 
 	 e h s _ i n f o . o v l _ s i z e . h e i g h t   =   o v l h [ 0 ] ; 
 	 e h s _ i n f o . b l d _ s i z e . w i d t h   =   b l d _ r e c t [ 0 ] . w ; 
 	 e h s _ i n f o . b l d _ s i z e . h e i g h t   =   b l d _ r e c t [ 0 ] . h ; 
 	 / *   s e t   e n h a n c e   s i z e   * / 
 	 d e _ e n h a n c e _ l a y e r _ a p p l y ( s c r e e n _ i d ,   & e h s _ i n f o ) ; 
 
 	 r e t u r n   0 ; 
 } 
 
 i n t   d e _ a l _ m g r _ a p p l y ( u n s i g n e d   i n t   s c r e e n _ i d ,   s t r u c t   d i s p _ m a n a g e r _ d a t a   * d a t a ) 
 { 
 	 u n s i g n e d   c h a r   t m p ; 
 	 i n t   c o l o r   =   ( d a t a - > c o n f i g . b a c k _ c o l o r . a l p h a   < <   2 4 )   | 
 	         ( d a t a - > c o n f i g . b a c k _ c o l o r . r e d   < <   1 6 )   | 
 	         ( d a t a - > c o n f i g . b a c k _ c o l o r . g r e e n   < <   8 )   | 
 	         ( d a t a - > c o n f i g . b a c k _ c o l o r . b l u e   < <   0 ) ; 
 
 	 g _ d e _ b l a n k [ s c r e e n _ i d ]   =   d a t a - > c o n f i g . b l a n k ; 
 
 	 i f   ( d a t a - > f l a g   &   M A N A G E R _ B A C K _ C O L O R _ D I R T Y ) 
 	 	 d e _ r t m x _ s e t _ b a c k g r o u n d _ c o l o r ( s c r e e n _ i d ,   c o l o r ) ; 
 	 i f   ( d a t a - > f l a g   &   M A N A G E R _ S I Z E _ D I R T Y )   { 
 	 	 d e _ r t m x _ s e t _ b l e n d _ s i z e ( s c r e e n _ i d ,   d a t a - > c o n f i g . s i z e . w i d t h , 
 	 	 	 	               d a t a - > c o n f i g . s i z e . h e i g h t ) ; 
 	 	 d e _ r t m x _ s e t _ d i s p l a y _ s i z e ( s c r e e n _ i d ,   d a t a - > c o n f i g . s i z e . w i d t h , 
 	 	 	 	 	   d a t a - > c o n f i g . s i z e . h e i g h t ) ; 
 	 } 
 	 i f   ( d a t a - > f l a g   &   M A N A G E R _ E N A B L E _ D I R T Y )   { 
 	 	 d e _ r t m x _ s e t _ e n a b l e ( s c r e e n _ i d ,   d a t a - > c o n f i g . e n a b l e ) ; 
 # i f   ! d e f i n e d ( H A V E _ D E V I C E _ C O M M O N _ M O D U L E ) 
 	 	 d e _ r t m x _ m u x ( s c r e e n _ i d ,   d a t a - > c o n f i g . h w d e v _ i n d e x ) ; 
 # e n d i f 
 	 	 d e _ r t m x _ s e t _ o u t i t l ( s c r e e n _ i d ,   d a t a - > c o n f i g . i n t e r l a c e ) ; 
 	 } 
 
 	 i f   ( d a t a - > f l a g   &   M A N A G E R _ C O L O R _ S P A C E _ D I R T Y )   { 
 	 	 / *   s e t   y u v   o r   r g b   b l e n d i n g   s p a c e   * / 
 	 	 t m p   =   ( D I S P _ C S C _ T Y P E _ R G B   = =   d a t a - > c o n f i g . c s )   ?   0   :   1 ; 
 	 	 d e _ r t m x _ s e t _ b l d _ c o l o r _ s p a c e ( s c r e e n _ i d ,   t m p ) ; 
 	 } 
 
 	 r e t u r n   0 ; 
 } 
 
 i n t   d e _ a l _ m g r _ s y n c ( u n s i g n e d   i n t   s c r e e n _ i d ) 
 { 
 	 / *   d o u b l e   r e g i s t e r   s w i t c h   * / 
 	 r e t u r n   d e _ r t m x _ s e t _ d b u f f _ r d y ( s c r e e n _ i d ) ; 
 } 
 
 i n t   d e _ a l _ m g r _ u p d a t e _ r e g s ( u n s i g n e d   i n t   s c r e e n _ i d ) 
 { 
 	 i n t   r e t   =   0 ; 
 
 	 d e _ r t m x _ u p d a t e _ r e g s ( s c r e e n _ i d ) ; 
 	 d e _ v s u _ u p d a t e _ r e g s ( s c r e e n _ i d ) ; 
 	 d e _ g s u _ u p d a t e _ r e g s ( s c r e e n _ i d ) ; 
 	 d e _ c c s c _ u p d a t e _ r e g s ( s c r e e n _ i d ) ; 
 
 	 r e t u r n   r e t ; 
 } 
 
 / *   q u e r y   i r q ,   i f   i r q   c o m i n g ,   r e t u r n   1 ,   a n d   c l e a r   i r q   f l g a   * / 
 i n t   d e _ a l _ q u e r y _ i r q ( u n s i g n e d   i n t   s c r e e n _ i d ) 
 { 
 	 r e t u r n   d e _ r t m x _ q u e r y _ i r q ( s c r e e n _ i d ) ; 
 } 
 
 i n t   d e _ a l _ e n a b l e _ i r q ( u n s i g n e d   i n t   s c r e e n _ i d ,   u n s i g n e d   e n ) 
 { 
 	 r e t u r n   d e _ r t m x _ e n a b l e _ i r q ( s c r e e n _ i d ,   e n ) ; 
 } 
 
 i n t   d e _ a l _ i n i t ( d i s p _ b s p _ i n i t _ p a r a   * p a r a ) 
 { 
 	 i n t   i ; 
 	 i n t   n u m _ s c r e e n s   =   d e _ f e a t _ g e t _ n u m _ s c r e e n s ( ) ; 
 
 	 f o r   ( i   =   0 ;   i   <   n u m _ s c r e e n s ;   i + + )   { 
 	 	 d e _ r t m x _ i n i t ( i ,   p a r a - > r e g _ b a s e [ D I S P _ M O D _ D E ] ) ; 
 	 	 d e _ v s u _ i n i t ( i ,   p a r a - > r e g _ b a s e [ D I S P _ M O D _ D E ] ) ; 
 	 	 d e _ g s u _ i n i t ( i ,   p a r a - > r e g _ b a s e [ D I S P _ M O D _ D E ] ) ; 
 	 } 
 
 	 r e t u r n   0 ; 
 } 
 