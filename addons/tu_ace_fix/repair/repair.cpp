class ACE_Repair {
    class Actions {
        class ReplaceWheel {
            repairingTime = 120;
            repairingTimeSelfCoef = 1;
        };
        class RemoveWheel: ReplaceWheel {
            repairingTime = 120;
        };
        class MiscRepair: ReplaceWheel {
            repairingTime = 900;
        };
        class RepairTrack: MiscRepair {
            repairingTime = 180;
        };
        class RemoveTrack: MiscRepair {
            repairingTime = 180;
        };
        class ReplaceTrack: RemoveTrack {
            repairingTime = 180;
        };
        class FullRepair: MiscRepair {
            repairingTime = 1200;
        };
    };
};