		normalSpeedForwardCoef=0.90;

		enginePower = 25;
		maxOmega = 210;
		peakTorque = 280;

		idleRpm = 600;
		redRpm = 2000;

		terrainCoef=1.1;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		thrustDelay=0.2;
		brakeIdleSpeed=1.78;
		maxSpeed=120;
		fuelCapacity=50;
		turnCoef = 3.5;
		wheelCircumference = 2.202;

		antiRollbarForceCoef	= 0.7;
		antiRollbarForceLimit	= 0.8;
		antiRollbarSpeedMin 	= 2;
		antiRollbarSpeedMax		= 20;

		changeGearMinEffectivity[]={0.95,0.15,0.95,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-1.351,"N",0,"D1",2.081,"D2",1.057,"D3",0.63,"D4",0.3};
			TransmissionRatios[] = {"High",4};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};

		simulation="carx";
		dampersBumpCoef=4;
		differentialType = "rear_open";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=3.5;
		centreBias=3.3;
		clutchStrength=45;

		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.15;
		dampingRateZeroThrottleClutchDisengaged = 0.15;
		torqueCurve[] = {{0,0.6},{0.2,0.65},{0.3,0.8},{0.7,0.95},{0.8,1},{0.9,0.95},{1,0.5}};

		switchTime=0.31;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "right";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 10.3;
				dampingRate = 0.1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 500;
				maxBrakeTorque = 1000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.26;
				mMaxDroop = 0.03;
				sprungMass = 150;
				//springStrength = 9050;
				springStrength = 95000;
				springDamperRate = 3500;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX=1.7;
				latStiffY=16.0;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class RF: LF
			{
				steering = 0;
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "left";
			};
			class LR: LF
			{
				steering = 0;
				boneName = "wheel_1_2_damper";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				latStiffY = 180;
				sprungMass = 20;
				springStrength = 10;
				springDamperRate = 1350;
			};
			class RR: RF
			{
				steering = 0;
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				latStiffY = 180;
				sprungMass = 20;
				springStrength = 10;
				springDamperRate = 1350;
			};
		};