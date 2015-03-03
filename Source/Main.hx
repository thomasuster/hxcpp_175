package;


import openfl._v2.gl.GL;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.Assets;


class Main extends Sprite {
	
	
	public function new () {
		
		super ();

		trace (GL.getParameter (GL.MAX_TEXTURE_SIZE));
	}
	
	
}