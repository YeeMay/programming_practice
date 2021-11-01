<!DOCTYPE html>
<html>
<head>
	<title>Airport distance calculator</title>
	<meta charset="utf-8">
</head>
<body>

	<script>
	
	//selected 132 airports
	var dac = ["PEK",
"NRT",
"HND",
"TPE",
"HKG",
"PVG",
"SYD",
"MLE",
"DEL",
"CTS",
"REP",
"DMK",
"DAD",
"SIN",
"KUL",
"HKT",
"AVV",
"AMD",
"AOR",
"ATQ",
"BCD",
"IXB",
"DPS",
"BTJ",
"BDO",
"TJQ",
"BLR",
"BBI",
"BTU",
"BNE",
"BWN",
"PUS",
"VCA",
"CEB",
"IXC",
"CSX",
"CTU",
"MAA",
"CNX",
"CEI",
"CKG",
"CMB",
"DLI",
"DVO",
"DAC",
"FUK",
"GOI",
"OOL",
"CAN",
"KWL",
"GAU",
"HGH",
"HAN",
"HDY",
"SGN",
"HNL",
"HHQ",
"HYD",
"ILO",
"IMF",
"JAI",
"CGK",
"JED",
"CJU",
"JHB",
"KHH",
"KKC",
"COK",
"CCU",
"KBR",
"BKI",
"KBV",
"TGG",
"KUA",
"KCH",
"KMG",
"LBU",
"LBJ",
"LGK",
"LHW",
"LOP",
"LPQ",
"MFM",
"UPG",
"MDL",
"MNL",
"KNO",
"MYY",
"NGO",
"NKG",
"NNG",
"CXR",
"OKA",
"KIX",
"PDG",
"PLM",
"UTP",
"PKU",
"PEN",
"PER",
"PNH",
"PQC",
"PNK",
"PPS",
"PNQ",
"JJN",
"IXR",
"SDK",
"SRG",
"ICN",
"SWA",
"SZX",
"SBW",
"KOS",
"DTB",
"SOQ",
"SXR",
"SUB",
"URT",
"TAC",
"TAG",
"TWU",
"TSN",
"TRZ",
"UTH",
"VNS",
"VTE",
"VTZ",
"WUH",
"XIY",
"RGN",
"JOG"];


		<?php 
		$airportData = file_get_contents("data.json");
		$airportArray = json_decode($airportData, true);
		?>
		
		var airportdata = <?php echo json_encode($airportArray)?>;
		var lat1, lon1, lat2, lon2;
		var csvString = "";
		
		
		
		function download_csv(csvString) {
			for (m = 0; m < dac.length; m++){

			  	for (n = 0; n < dac.length; n++){
			  		
			  		for (i = 0; i < airportdata.length; i++) {
					  if(airportdata[i].code == dac[m]){
						lat1 = airportdata[i].lat;
						lon1 = airportdata[i].lon;
					  }
					  
					  if(airportdata[i].code == dac[n]){
						lat2 = airportdata[i].lat;
						lon2 = airportdata[i].lon;
					  }
					}
					
					var dist = distanceCalculator(lat1, lon1, lat2, lon2);
					csvString += dist;
					csvString += ",";											
			  	}
			  	
			  	csvString += "\n";
			}	
		
		    console.log(csvString);
		    //create a link - html <a>
		    var hiddenElement = document.createElement('a');
		    hiddenElement.href = 'data:text/csv;charset=utf-8,' + encodeURI(csvString);
		    hiddenElement.target = '_blank';
		    hiddenElement.download = 'airplane_distance.csv';
		    hiddenElement.click();
		}
				
		function distanceCalculator(lat1, lon1, lat2, lon2){
			
			if ((lat1 == lat2) && (lon1 == lon2)){
				return 0;
			}
			
			else{
			var radlat1 = Math.PI * lat1/180;
			var radlat2 = Math.PI * lat2/180;
			var theta = lon1 - lon2;
			var radtheta = Math.PI * theta/180;
			//haversine formula
			var distance = Math.sin(radlat1) * Math.sin(radlat2) + Math.cos(radlat1) * Math.cos(radlat2) * Math.cos(radtheta);
			if (distance > 1){
				distance = 1;
			}
			distance = Math.acos(distance);
			distance = distance * 180/Math.PI;
			//* 1.1515 to change from nm to miles, *60 to convert from minutes to hour
			distance = distance * 60 * 1.1515;
			//miles to kilometer
			distance = distance *  1.609344;
			return distance;		
		}
		 }
		
	</script>
	
	<button onclick="download_csv()">Download Airport Distance (kmh) in CSV</button> 
	
</body>
</html>