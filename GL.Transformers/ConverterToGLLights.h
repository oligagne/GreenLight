// GL.Transform.h

#pragma once
#include <list> 
#include <string>
#include "Light.h"

namespace GLTransformer {

	class ConverterToGLLights
	{
		public:
			ConverterToGLLights();
			~ConverterToGLLights();
			std::list<Light*> TransformToGLLigth(string filename);
		private:
			string _kmlFileName;

	};
}
