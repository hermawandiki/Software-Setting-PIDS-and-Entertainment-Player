import QtQuick 2.7
import QtQuick.Window 2.2
import QtLocation 5.15
import QtPositioning 5.15

Rectangle {
    id: window
    property double oldLat: -7.613423
    property double oldLng: 111.510638
    property double oLat: -7.613423
    property double oLng: 111.510638
    property Component comMarker: mapMarker

    Plugin {
        id: mapPlugin
        name: "osm";
        PluginParameter { name: "osm.mapping.cache.directory"; value: "C:/cache_Map/" }
        PluginParameter { name: "osm.mapping.offline.directory"; value: "C:/cache_Map/" }
        //PluginParameter { name: "osm.mapping.highdpi_tiles"; value: true }
        PluginParameter { name: "osm.mapping.copyright"; value: "Teknologi PT Rekaindo Global jasa" }
    }

    Map {
        id: mapView
        anchors.fill: parent

        plugin: mapPlugin;
        activeMapType: mapView.supportedMapTypes[2]
        center: QtPositioning.coordinate(oldLat, oldLng);
        zoomLevel: 15
    }

    function setCenter(lat, lng) {
        mapView.pan(oldLat - lat, oldLng - lng)
        oldLat = lat
        oldLng = lng
        oLat = lat
        oLng = lng
        mapView.clearMapItems()
    }

    function addMarker(lat, lng) {
        var item = comMarker.createObject(window, { coordinate: QtPositioning.coordinate(lat, lng) })
        mapView.addMapItem(item)
    }

    Component {
        id: mapMarker
        MapQuickItem {
            id: markerImg
            anchorPoint.x: image.width / 4
            anchorPoint.y: image.height
            coordinate: position

            sourceItem: Column {
                Image { id: image; source: "qrc:/img/marker.png" }
                Text { text: "Train Pos" }
                Text { text: "Lat : " + oLat.toFixed(6) }
                Text { text: "Long : " + oLng.toFixed(6) }
            }
        }
    }
}
