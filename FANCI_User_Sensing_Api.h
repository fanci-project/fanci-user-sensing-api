/**
*
* Copyright (c) 2017 The FANCI User Sensing API Authors. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

namespace fanci
{
	template <typename Algo_Input_t, typename Algo_Output_t>
	class Fanci_User_Sensing_Api
	{
	public:
		virtual bool predict(const Algo_Input_t &sInput, Algo_Output_t &sOutput) = 0;
	};

	// Device IO
	class FANCI_Camera_IO;
	class FANCI_Voice_IO;

	// Face Analysis
	struct FANCI_Face_Analysis_Pipeline_Manager_Params;
	class FANCI_Face_Localization;
	class FANCI_Face_Landmark_Localization;
	class FANCI_Headpose_Estimation;
	class FANCI_Facial_Gesture_Recognition;
	class FANCI_Emotion_Recognition;
	class FANCI_Face_Authentication;
	class FANCI_Face_Analysis_Pipeline_Manager;

	// Voice Analysis
	struct FANCI_Voice_Analysis_Pipeline_Manager_Params;
	class FANCI_Voice_Authentication;
	class FANCI_Voice_Pitch_Detection;
	class FANCI_Voice_Tone_Detection;
	class FANCI_Voice_Analysis_Pipeline_Manager;

	// Eye Tracking
	struct FANCI_Eye_Tracking_Pipeline_Manager_Params;
	class FANCI_Eye_Tracking_Pipeline_Manager;
	
	// Hand Gestures
	class FANCI_Hand_Gesture_Pipeline_Manager;
}

#endif //__FANCI_USER_SENSING_API__